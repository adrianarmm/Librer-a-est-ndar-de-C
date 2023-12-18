#include <stdio.h>

int main() {
    FILE *file = fopen("2a", "r");
    if (file == NULL) {
        printf("No se pudo abrir el archivo.\n");
        return 1;
    }
    else {
        fclose(file);
    }


return 0;
}