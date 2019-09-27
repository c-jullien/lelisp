(eval-when (load eval compile)
(defsharp _ () `(',(let ((x (read))) (cons x x))))
)

(defun f-foo1(x))

;; to test imported macro-definer
(eval-when (load eval compile)
(defmacro defgoo1 (x)
 `(defun ,(concat 'm-goo1- x) () ',x))
)
