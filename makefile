all: main
main: main.o
	gcc main.o -o main
main.o: main.c main.h
	gcc -c main.c
clean:
	rm -f main main.o
