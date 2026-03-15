target:main.o struct.o
	gcc $^ -o $@
main.o:main.c struct.h
	gcc -c $<
struct.o:struct.c
	gcc -c $<
