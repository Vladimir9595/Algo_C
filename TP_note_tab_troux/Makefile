# Makefile

CC = gcc
CFLAGS = -Wall -Wextra -std=c99

# Liste des fichiers source
SRCS = fonctions_trous.c main.c

# Générer la liste des fichiers objets
OBJS = $(SRCS:.c=.o)

# Nom de l'exécutable
TARGET = tableaux_trous

# Règle de construction de l'exécutable
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^
	./$@

# Règle de construction des fichiers objets
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Règle pour nettoyer les fichiers objets et l'exécutable
clean:
	rm -f $(OBJS) $(TARGET)
