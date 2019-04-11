CC = g++

main: main.o complex.o
	$(CC) main.o complex.o -o main -g
main.o: main.cpp complex.h
	$(CC) main.cpp -c -g
complex.o: complex.cpp complex.h
	$(CC) complex.cpp -c -g


