#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main() {
    srand(time(0));

    int limite_inferior = 0;
    int limite_superior = 100;

    int rango = limite_superior - limite_inferior + 1;
    int random_number = rand() % rango + limite_inferior;

    printf("Número aleatorio entre %d y %d: %d\n", limite_inferior, limite_superior, random_number);

    return 0;
}