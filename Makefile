CFLAGS = -lcurses
default: program
program: main.c
	gcc $(CFLAGS) main.c -o npiano
clean:
	-rm -f npiano
