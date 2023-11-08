C = gcc -std=c99

# Liste des fichiers sources
RESOURCES = triangle.c

# Créez des cibles exécutables pour chaque fichier source
EXECUTABLE = $(RESOURCES:.c=)

all: $(EXECUTABLE)

%: %.c
	$(C) $< -o $@
	./$@

square: square.c
	$(C) $< -o $@ -lm
	./$@

clean:
	rm -f $(EXECUTABLE)