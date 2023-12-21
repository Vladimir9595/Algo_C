CC = gcc
CFLAGS = -Wall -Wextra -std=c99

SRC = main.c functions.c
OBJ = $(SRC:.c=.o)
HEADERS = functions.h

TARGET = TP6

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJ)

%.o: %.c $(HEADERS)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(TARGET)

.PHONY: all clean
