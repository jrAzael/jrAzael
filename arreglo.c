#include <stdio.h>

int main() {
    const int TAMANO_ARREGLO = 5;
    int numeros[TAMANO_ARREGLO] = {2, 4, 6, 8, 10};
    int numero_a_buscar = 6;
    int encontrado = 0; // Usamos 0 para indicar falso y 1 para indicar verdadero

    printf("Contenido del arreglo de numeros:\n");
    for (int i = 0; i < TAMANO_ARREGLO; ++i) {
        printf("Elemento %d: %d\n", i, numeros[i]);
        if (numeros[i] == numero_a_buscar) {
            encontrado = 1;
        }
    }

    if (encontrado) {
        printf("El numero %d esta en el arreglo.\n", numero_a_buscar);
    } else {
        printf("El numero %d no esta en el arreglo.\n", numero_a_buscar);
    }

    return 0;
}
