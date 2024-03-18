/* Calculo del menor de dos numeros dados,por el usuario*/
#include <stdio.h>
int main() {
int menor, numero1, numero2;
printf("Escriba el primer numero y pulso INTRO: ");
scanf("%d",&numero1);
printf("Escriba el segundo numero y pulso INTRO: ");
scanf("%d",&numero2);
if (numero1 < numero2) {
menor=numero1;
}else {
menor=numero2;

}

printf("El menor de %d y %d es %d\n",numero1, numero2, menor);
return 0;
}