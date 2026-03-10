target:fact.o main.o
	gcc fact.o main.o -o target
main.o: main.c fact.h
	gcc -c main.c
fact.o:fact.c fact.h
	gcc -c fact.c -o fact.o
