CC = g++

main: main.o vector.o
	$(CC) main.o vector.o -o main -g
main.o: main.cpp vector.h
	$(CC) main.cpp -c -g
vector.o: vector.cpp vector.h
	$(CC) vector.cpp -c -g
