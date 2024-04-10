# Makefile for a C program from ChatGBT

CC = gcc
CFLAGS = -Wall -Wextra -std=c11
TARGET = in_decoder.out
SRC = generator.c incoder.c fehler.c decoder.c test.c
OBJ = $(SRC:.c=.o)

$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $<

run: $(TARGET)
	./$(TARGET)

check:
	cat test_generator.txt
	cat test_incoder.txt
	cat test_fehler.txt
	cat test_decoder.txt

clean:
	rm -f $(TARGET) $(OBJ)

cleanall:
	rm -f *.o *.txt *.out
