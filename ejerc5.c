#include<stdio.h>
int main (){
    float sum=0,mult=1;
    int tam=0;
    printf("ingresa el tamaño del arreglo : ");
    scanf("%d", &tam);
    printf(" tamaño %d\n",tam);
    float arre[tam];
    for (int i=0;i<tam;i++){
         printf("ingresa un numero para la posicion %d: ",i);
    scanf("%f", &arre[i]);     
         sum=sum+arre[i];
         mult=mult*arre[i];
    }
    printf("el promedio es: %f\n",sum/tam);
    printf("la multiplicacion es: %f\n",mult);
    return 0;
}