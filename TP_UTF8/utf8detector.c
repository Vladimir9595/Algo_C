#include "utf8detector.h"
#include <stdio.h>
#include <stdint.h>
#include <ctype.h>

int isSpecialCharacter(uint32_t code) {
    // Retourne vrai si le caractère est spécial
    return !isalnum(code);
}

void detectUTF8(const char *buffer, size_t size) {
    for (size_t i = 0; i < size; ++i) {
        if ((buffer[i] & 0b10000000) && !(buffer[i] & 0b01000000)) {
            // Caractère sur 2 octets
            uint16_t code = ((buffer[i] & 0b00011111) << 6) | (buffer[i + 1] & 0b00111111);
            if (isSpecialCharacter(code)) {
                printf("\nPosition: %zu, Code: 0x%X, Caractère: %c\n", i, code, (char)code);
            }
            ++i;
        } else if ((buffer[i] & 0b11100000) && !(buffer[i] & 0b00100000)) {
            // Caractère sur 3 octets
            uint32_t code = ((buffer[i] & 0b00001111) << 12) | ((buffer[i + 1] & 0b00111111) << 6) | (buffer[i + 2] & 0b00111111);
            if (isSpecialCharacter(code)) {
                printf("\nPosition: %zu, Code: 0x%X, Caractère: %c\n", i, code, (char)code);
            }
            i += 2;
        }
    }
}
