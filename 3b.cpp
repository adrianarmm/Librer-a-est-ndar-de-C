#include <stdio.h>

int main() {
    FILE *file = fopen("2a", "w");
    if (file == NULL) {
        printf("El archivo no se pudo abrir para escritura.\n");
        return 1;
    }
    fprintf(file, "No merezco ir a ordinaria\n");
    fclose(file);

    file = fopen("2b", "r");
    if (file == NULL) {
        printf("El archivo no se pudo abrir para lectura.\n");
        return 1;
    }
    char buffer[50];
    if (fgets(buffer, sizeof(buffer), file) != NULL) {
        printf("Contenido del archivo: %s\n", buffer);
    } else {
        printf("No se pudo leer del archivo.\n");
    }
    fclose(file);

    }