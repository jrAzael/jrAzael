#include<stdio.h>
int main (){
    int tam=0;
    printf("ingresa el tamaño del arreglo : ");
    scanf("%d", &tam);
    printf(" tamaño %d\n",tam);
    float arre[tam];
    for (int i;i<=tam;i++){
         printf("ingresa un numero para la posicion %f: ",i);
    scanf("%f", &arre[i]);
          
    }

}