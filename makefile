# Makefile for a C program from ChatGBT

CC = gcc
CFLAGS = -Wall -Wextra -std=c11
TARGET = in_decoder.out
SRC = generator.c incoder.c fehler.c test.c # Add all your source files here
OBJ = $(SRC:.c=.o)

$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $<

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f $(TARGET) $(OBJ)

cleanall:
	rm -f *.o *.txt *.out
