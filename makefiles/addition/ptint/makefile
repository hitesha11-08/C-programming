target: ptint.o main.o
	gcc ptint.o main.o -o target
main.o: main.c ptint.h
	gcc -c main.c
ptint.o:ptint.c ptint.h
	gcc -c ptint.c
