#ifndef FILEIO_H
#define FILEIO_H

#include <stddef.h>

char *readFile(const char *filename, size_t *size);
void writeFile(const char *filename, const char *buffer, size_t size);

#endif
