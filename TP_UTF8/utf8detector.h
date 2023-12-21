#ifndef UTF8DETECTOR_H
#define UTF8DETECTOR_H

#include <stddef.h>
#include <stdint.h>
#include <ctype.h>

int isSpecialCharacter(uint32_t code);
void detectUTF8(const char *buffer, size_t size);

#endif