#include <stdio.h>

int main() {
    FILE *file = fopen("2a", "w");
    if (file == NULL) {
        printf("El archivo no se pudo abrir para escritura.\n");
        return 1;
    }
    fprintf(file, "No merezco ir a ordinaria\n");
    fclose(file);
}