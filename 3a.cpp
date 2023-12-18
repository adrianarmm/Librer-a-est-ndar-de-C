#include <stdio.h>

int main() {
    FILE *file = fopen("3a", "r");
    if (file == NULL) {
        printf("No se pudo abrir el archivo.\n");
        return 1;
    }
    else {
        printf("Archivo abierto.\n");
    }
    fclose(file);
}