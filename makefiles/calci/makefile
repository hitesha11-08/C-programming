target: calci.o main.o
                gcc $^ -o $@
main.o: main.o calci.o
        gcc -c $<
calci.o: calci.c calci.h
        gcc -c $<

