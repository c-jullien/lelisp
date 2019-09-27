/* dlfcn.cc

   Copyright 1998 Cygnus Solutions

This file is part of Cygwin.

This software is a copyrighted work licensed under the terms of the
Cygwin license.  Please consult the file "CYGWIN_LICENSE" for
details. */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "winsup.h"
#include "dlfcn.h"
#include "dll_init.h"

static int _dl_error = 0;
static char _dl_buffer[256];

static void
set_dl_error (const char *str)
{
  __small_sprintf (_dl_buffer, "%s: Win32 %E", str);
  _dl_error = 1;
}

static const char *
check_access (const char *dir, const char *name)
{
  static char buf[MAX_PATH];
  const char *ret = 0;

  buf[0] = 0;
  strcpy (buf, dir);
  strcat (buf, "\\");
  strcat (buf, name);

  if (!access (buf, F_OK))
    ret = buf;
  return ret;
}

static const char *
check_path_access (const char *winenv, const char *name)
{
  static char buf[MAX_PATH];
  return find_exec (name, buf, winenv, TRUE);
}

// this function simulates the same search as LoadLibary
// + check environment variable LD_LIBRARY_PATH
static const char *
get_full_path_of_dll (const char* str)
{
  if (str == 0)
    return str;

  static const char *ret = 0;
  char buf[MAX_PATH];
  char name[MAX_PATH];

  // add extension if necessary
  strcpy (name, str);
  int len = strlen (str);

  // empty string?
  if (len == 0)
    return str;

  // trailing "." => no extension
  if (str[len - 1] == '.')
    name[len - 1] = 0;
  else if (len < 4 || str[len - 4] != '.' ) // then check if it ends with .xxx
    strcat (name, ".dll");
  // first check if leading "/" or "\"
  if (name[0] == '/' || name[0] == '\\')
    ret = name;

  // current directory
  if (!ret)
    {
      if (GetCurrentDirectory (MAX_PATH, buf) == 0)
	small_printf ("WARNING: get_full_path_of_dll can't get current directory win32 %E\n");
      else
	ret = check_access (buf, name);
    }

  // LD_LIBRARY_PATH
  if (!ret)
    ret = check_path_access ("LD_LIBRARY_PATH=", name);

  if (!ret)
    {
      // system directory
      if (GetSystemDirectory (buf, MAX_PATH) == 0)
	small_printf ("WARNING: get_full_path_of_dll can't get system directory win32 %E\n");
      else
	ret = check_access (buf, name);
    }

  // 16 bits system directory
  if (!ret && (os_being_run == winNT))
    {
      // we assume last dir was xxxxx\SYSTEM32, so we remove 32
      len = strlen (buf);
      buf[len - 2] = 0;
      ret = check_access (buf, name);
    }

  // windows directory
  if (!ret)
    {
      if (GetWindowsDirectory (buf, MAX_PATH) == 0)
	small_printf ("WARNING: get_full_path_of_dll can't get Windows directory win32 %E\n");
      else
	ret = check_access (buf, name);
    }

  // PATH
  if (!ret)
    ret = check_path_access ("PATH=", name);

  return ret;
}

void *
dlopen (const char *name, int)
{
  const char *fullpath = get_full_path_of_dll (name);
  DllList::the().currentDlOpenedLib (fullpath);
  void *ret = (void *) LoadLibrary (fullpath);
  if (!ret)
    set_dl_error ("dlopen");
  debug_printf ("ret %p", ret);
  return ret;
}

void *
dlsym (void *handle, const char *name)
{
  void *ret = (void *) GetProcAddress (handle, name);
  if (!ret)
    set_dl_error ("dlsym");
  debug_printf ("ret %p", ret);
  return ret;
}

int
dlclose (void *handle)
{
  int ret = -1;
  if (FreeLibrary (handle))
    ret = 0;
  if (ret)
    set_dl_error ("dlclose");
  return ret;
}

char *
dlerror ()
{
  char *ret = 0;
  if (_dl_error)
    ret = _dl_buffer;
  return ret;
}
