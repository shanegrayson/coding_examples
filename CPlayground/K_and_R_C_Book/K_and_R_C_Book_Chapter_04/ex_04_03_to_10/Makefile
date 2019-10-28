all: run_atof

run_atof: atof.o getch.o getop.o stack.o
	gcc -Wall atof.c getch.c getop.c stack.c -o run_atof -I.

atof.o:
	gcc -Wall -c atof.c -I.

getch.o:
	gcc -Wall -c getch.c -I.

getop.o:
	gcc -Wall -c getop.c -I.

stack.o:
	gcc -Wall -c stack.c -I.
