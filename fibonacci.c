#include <stdio.h>

void generarFibonacci(int n) {
    int a = 0, b = 1, c;

    printf("Secuencia de Fibonacci hasta el término %d:\n", n);

    for (int i = 0; i < n; ++i) {
        printf("%d", a);
        c = a + b;
        a = b;
        b = c;
    }

    printf("\n");
}

int main() {
    int n;

    printf("Ingrese el número de términos de la secuencia de Fibonacci: ");
    scanf("%d", &n);

    generarFibonacci(n);

    return 0;
}