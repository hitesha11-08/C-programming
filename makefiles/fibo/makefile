target:main.o fibo.o
	gcc $^ -o $@
main.o:main.c fibo.h
	gcc -c $<
fact.o:fibo.c
	gcc -c $<
