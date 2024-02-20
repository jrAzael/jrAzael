#include <stdio.h>

int main() {
    float num1, num2;
    printf("Ingrese el primer numero: ");
    scanf("%f", &num1);
    printf("Ingrese el segundo numero: ");
    scanf("%f", &num2);

    // Suma
    printf("Suma: %.2f + %.2f = %.2f\n", num1, num2, num1 + num2);

    // Resta
    printf("Resta: %.2f - %.2f = %.2f\n", num1, num2, num1 - num2);

    // Multiplicacion
    printf("Multiplicacion: %.2f * %.2f = %.2f\n", num1, num2, num1 * num2);

    // Division (evitamos dividir por cero)
    if (num2 != 0) {
        printf("Division: %.2f / %.2f = %.2f\n", num1, num2, num1 / num2);
    } else {
        printf("Division por cero no es posible.\n");
    }

    return 0;
}