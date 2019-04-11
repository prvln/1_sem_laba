CC = g++

main: main.o f_action.o
	$(CC) main.o f_action.o -o main -g
main.o: main.cpp f_action.h
	$(CC) main.cpp -c -g
f_action.o: f_action.cpp f_action.h
	$(CC) f_action.cpp -c -g


