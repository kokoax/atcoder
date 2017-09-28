(defparameter *memo* nil)
(defparameter *N* (read))
(defparameter *a* (- (read) 1))
(defparameter *b* (- (read) 1))
(defparameter *xy* (loop for i from 1 to *N*
                         collect (cons (read) (read))))

(defun push-memo (x y)
  (push (cons x y) *memo*)
  (push (cons y x) *memo*))

(defun get-hole (i)
  (nth i *xy*))

(defun d (i j)
  (+ (abs (- (car (get-hole i)) (car (get-hole j))))
     (abs (- (cdr (get-hole j)) (cdr (get-hole j))))))

(defun countup (now_a now_b)
  (push-memo now_a now_b)
  (princ *memo*)
  (fresh-line)
  (loop :for i :from 0 :to (- *N* 1)
        :do (if (and (not (eql now_a i)) (not (eql i now_b)))
              (and (if (and (eql (d now_a now_b) (d now_a i))
                            (not (position (cons now_a i) *memo* :test #'equal)))
                     (countup now_a i))

                   (if (and (eql (d now_a now_b) (d i now_b))
                            (not (position (cons i now_b) *memo* :test #'equal)))
                     (countup i now_b))))))

(defun check-input ()
  (princ *N*)
  (fresh-line)
  (princ *a*)
  (fresh-line)
  (princ *b*)
  (fresh-line)
  (princ *xy*)
  (fresh-line))

