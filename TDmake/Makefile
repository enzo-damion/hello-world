all: main

date.o: date.c date.h
	gcc -c date.c

person.o: person.c person.h
	gcc -c person.c

list.o: list.c list.h
	gcc -c list.c

main.o: main.c
	gcc -c main.c

main: main.o date.o
	gcc -o main main.o date.o person.o list.o

clean:
	rm -f *.o ./main