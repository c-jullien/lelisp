; declenche l'import de bar pour une macro
(eval-when (load eval compile)
(defbar3 f-gee11)
)
(eval-when (load eval compile)
(defbar4 f-gee12)
)

;; to test DEFUN inside PROGN
(progn (defun f-gee21(x)x)
       (defun f-gee22(x)x))

;; to test -include option
(de f-gee1(x) ({a-bar2}:f-bar2 x)(f-gee21 x)(f-gee31))

;; to test DEFUN inside IF
(eval-when (load eval compile)
(defvar xxx 0)
(when xxx
  (defun f-gee31())
  (defun f-gee32())
  )
)

;; to test a localy macro (which don't have to be exported)
(defmacro m-gee4(x)`(cons ,x,x))
(defun f-gee41(x)
  (m-gee4 x))

;; another macro to be exported
(defmacro m-gee42(x)`(cons ,x,x))

;; to test SETFN
(setfn 'f-gee51 'expr '((x)(f-gee52 x)))
(de f-gee52(x) x)

; to test a user included file (bar.lh) which hasn't to be imported
(m-zoo5 f-gee53)
