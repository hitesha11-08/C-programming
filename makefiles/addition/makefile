addition:add.o main.o
	gcc add.o main.o -o addition
main.o: main.c add.h
	gcc -c main.c 
add.o:add.c add.h
	gcc -c add.c 
