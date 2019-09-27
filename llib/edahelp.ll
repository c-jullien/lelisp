                 EdLin commands
                 ==============

Cursor motion (in an Emacs fashion):

     ^F, ^B      Move forward/backward by one character
  ESC-f, ESC-b   Start/end of word
     ^A, ^E      Start/end of line

Delete (DEL can be used in place of BS):

     ^D, BS      Next/previous character
  ESC-d, ESC-BS  Next/previous word
     ^U, ^K      Start/end of line (see ^Y)
     ^Y          Undo the deletions caused by ^U or ^K

History of commands:

     ^I, ^N      Next/previous command
  ESC-<, ESC->   Start/end of history
  ESC-h          Display history
  ESC-ESC        Find a former command that starts
                 like the current command

End of line:

   CR or LF      Send the line to Lisp and save it in the history
   ^O            Send the line to Lisp and go to the next command
                 in the history

Help:

  ESC-SP         Complete the symbol preceding the cursor, or (in an
                 ambiguous situation) display all possible symbols
  ESC-'          Quote the current symbol

Miscellaneous:

  ESC-<number> <command>  Repeat <command> <number> times
  ^L                      Redisplay the line
  \                       Forcing character
  ESC-^G                  Illegal sequence (useful when you
                          hit ESC by mistake)
  ESC-?                   EdLin documentation
  ^T                      To exchange a pair of letters

(edlin) starts EdLin
(edlinend) ends EdLin

Commands that also happen to be Le-Lisp macro-characters
(such as ^L, for example) are not interpreted when they
appear at the start of a line.
