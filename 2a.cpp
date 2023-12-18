#include <string.h>
#include <stdio.h>

const char* compararCadenas(const char* cadena1, const char* cadena2) {
    int comparacion = strcmp(cadena1, cadena2);
    if (comparacion == 0) {
        return "Las cadenas son iguales.";
    } else {
        return "Las cadenas son diferentes.";
    }
}

int main() {
    char str1[] = "Quieres tarta de queso?";
    char str2[] = "Porque me mandas a ordinaria?";
    const char* resultado = compararCadenas(str1, str2);

    printf("%s\n", resultado);
    return 0;