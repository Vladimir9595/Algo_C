C = gcc -std=c99

# Liste des fichiers sources
RESOURCES = array.c

# Créez des cibles exécutables pour chaque fichier source
EXECUTABLE = $(RESOURCES:.c=)

all: $(EXECUTABLE)

%: %.c functions.c
	$(C) $^ -o $@
	./$@

clean:
	rm -f $(EXECUTABLE)