CC = gcc
CFLAGS = -std=c11 -Wall -Wextra -pedantic -O2
OBJ = main.o tabla.o conversion.o
#nombre ejecutable:
TARGET = tabla_presion

all: $(TARGET)

# gcc -std=c11 -Wall -Wextra -pedantic -O2 -o tabla_presion main.o tabla.o conversion.o
$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJ)	

main.o: main.c tabla.h
tabla.o: tabla.c tabla.h conversion.h
conversion.o: conversion.c conversion.h

clean:
	rm -f *.o $(TARGET) conversion.i

.PHONY: all clean