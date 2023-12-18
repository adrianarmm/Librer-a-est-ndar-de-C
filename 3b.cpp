#include <stdio.h>

int main() {
    FILE *file = fopen("1", "w");
    if (file == NULL) {
        printf("El archivo no se pudo abrir para escritura.\n");
        return 1;
    }
    fprintf(file, "No merezco ir a ordinaria\n");
    fclose(file);

    file = fopen("1b", "r");
    if (file == NULL) {
        printf("El archivo no se pudo abrir para lectura.\n");
        return 1;
    }
    char buffer[50];
    if (fgets(buffer, sizeof(buffer), file) != NULL) {
        printf("Contenido del archivo:no quiero ir a ordinaria %s\n", buffer);
    } else {
        printf("No se pudo leer del archivo.\n");
    }
    fclose(file);

    return 0;
    }