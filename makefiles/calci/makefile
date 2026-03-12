target: calci.o main.o
		gcc calci.o main.o -o target
main.o: main.o calci.o
	gcc -c main.c
calci.o: calci.c calci.h
	gcc -c calci.c
