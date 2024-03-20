#include<stdio.h>
int main (){
    int tam=0;
    printf("ingresa el tamaño del arreglo : ");
    scanf("%d", &tam);
    printf(" tamaño %d\n",tam);
    float arre[tam];
    for (int i=0;i<tam;i++){
         printf("ingresa un numero para la posicion %d: ",i);
    scanf("%f", &arre[i]);     
    }
        for (int x=0;x<tam;x++){
         printf(" el numero en la posicion %d es : %.1f\n",x,arre[x]);   
    } 
    return 0;

}