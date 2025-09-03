CC = gcc
CFLAGS = -lm

DEPENDANCES = main.h
OBJECTS = main.o quadratic.o

%.o: %.c $(DEPENDANCES)
	$(CC) -c -o $@ $< $(CFLAGS)

main: $(OBJECTS) 
	$(CC) -o $@ $^ $(CFLAGS)

