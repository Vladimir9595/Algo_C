C = gcc -std=c99

# Liste des fichiers sources
RESOURCES = main.c

# Créez des cibles exécutables pour chaque fichier source
EXECUTABLE = $(RESOURCES:.c=)

all: $(EXECUTABLE)

%: %.c
	$(C) $< -o $@
	./$@

clean:
	rm -f $(EXECUTABLE)