#include <string.h>
#include <stdio.h>

const char* compararCadenas(const char* cadena1, const char* cadena2) {
    int comparacion = strcmp(cadena1, cadena2);
    if (comparacion == 0) {