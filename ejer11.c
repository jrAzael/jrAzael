#include <stdio.h>
#include <string.h>
int main (){
    char palabra1[20],palabra2[20];
    printf("introduce la primer palabra: ");
    scanf("%s",palabra1);
    printf("introduce la segunda palabra: ");
    scanf("%s",palabra2);
    int comparacion = strcmp(palabra1,palabra2);
    int resultado = strcmp(palabra1,palabra2);
    int longitud1= strlen(palabra1);
    int longitud2= strlen(palabra2);

        if (comparacion==0){
        printf("ambas palabras son iguales\n");
    }else if(longitud1==longitud2){
        printf("ambas palabras tienen la misma longitud\n");
    }else if(comparacion>0){
        printf("la palabra %s es menor que la palabra %s \n",palabra1,palabra2);

    }else if(comparacion<0){
        printf("la palabra %s es mayor que la palabra %s \n",palabra1,palabra2);
    }
    if (resultado==0){
        printf("0");
    }else if(longitud1==longitud2){
        printf("0");
    }else if(resultado<0){
        printf("1");

    }else if(resultado>0){
        printf("-1");
    }
        printf("\n");
        return 0;
}