CC = g++

main: main.o knigga.o
	$(CC) main.o knigga.o -o main -g
main.o: main.cpp knigga.h
	$(CC) main.cpp -c -g
knigga.o: knigga.cpp knigga.h
	$(CC) knigga.cpp -c -g

