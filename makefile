OBJSS = integer.o sll.o test-integer.o
OBJSD = real.o dll.o test-dll.o
OBJSQ = integer.o queue.o test-queue.o sll.o
OBJSK = integer.o stack.o test-stack.o dll.o
OOPTS = -Wall -Wextra -g -c -std=c99
LOPTS = -Wall -Wextra -g

test-sll : $(OBJSS)
	gcc $(LOPTS) -o test-sll $(OBJSS)

test-dll : $(OBJSD)
	gcc $(LOPTS) -o test-dll $(OBJSD)

test-queue : $(OBJSQ)
	gcc $(LOPTS) -o test-queue $(OBJSQ)

test-stack : $(OBJSK)
	gcc $(LOPTS) -o test-stack $(OBJSK)

sll.o : sll.c sll.h
	gcc $(OOPTS) sll.c

dll.o : dll.c dll.h
	gcc $(OOPTS) dll.c

queue.o : queue.c queue.h sll.c
	gcc $(OOPTS) queue.c

stack.o : stack.c stack.h dll.c
	gcc $(OOPTS) stack.c

integer.o : integer.c integer.h
	gcc $(OOPTS) integer.c

test-dll.o : test-dll.c real.h dll.h
	gcc $(OOPTS) test-dll.c

test-queue.o : test-queue.c integer.h sll.c queue.h
	gcc $(OOPTS) test-queue.c

test-stack.o : test-stack.c integer.h dll.c queue.h
	gcc $(OOPTS) test-stack.c

test-sll.o : test-integer.c integer.c sll.c
	gcc $(OOPTS) test-integer.c

clean   :
	rm -f *.o test-sll test-dll test-queue test-stack

test : 
	echo
	echo "testing singly linked list"
	make test-sll
	./test-sll
	echo
	echo "testing doubly linked list"
	make test-dll
	./test-dll
	echo
	echo "testing queue"
	make test-queue
	./test-queue
	echo
	echo "testing stack"
	make test-stack
	./test-stack
	echo
