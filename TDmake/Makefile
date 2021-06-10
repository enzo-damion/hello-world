all: main

date.o: date.c date.h
	gcc -g -c date.c

person.o: person.c person.h
	gcc -g -c person.c

list.o: list.c list.h
	gcc -g -c list.c

main.o: main.c
	gcc -g -c main.c

main: main.o date.o
	gcc -o main main.o date.o person.o list.o

clean:
	rm -f *.o ./main