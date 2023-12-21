CC = gcc
CFLAGS = -Wall -Wextra -std=c99

SRC = main.c utf8detector.c arabicdigits.c fileinputoutput.c
OBJ = $(SRC:.c=.o)
HEADERS = utf8detector.h arabicdigits.h fileinputoutput.h

TARGET = UTF8

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJ)

%.o: %.c $(HEADERS)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(TARGET)

.PHONY: all clean
