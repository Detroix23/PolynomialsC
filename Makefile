CC = gcc
CFLAGS = -lm
DEPENDANCES = main.h

%.o: %.c $(DEPENDANCES)
	$(CC) -c -o $@ $< $(CFLAGS)

main: main.c quadratic.c
	$(CC) -o main main.c quadratic.c $(CFLAGS)

