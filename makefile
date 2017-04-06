all: radix

radix: main.o radix.o
	gcc -g -o radix main.o radix.o

main.o: main.c
	gcc -g -c main.c

radix.o: radix.c
	gcc -g -c radix.c

clean:
	rm *.o
