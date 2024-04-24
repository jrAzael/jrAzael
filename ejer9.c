#include <stdio.h>
#include <string.h>
int main (){
    char palabra1[20],palabra2[20];
    int longitud,i;
    printf("introduce la primer palabra: ");
    scanf("%s",palabra1);
    printf("introduce la segunda palabra: ");
    scanf("%s",palabra2);
    longitud = strlen(palabra1);
    printf("palabra1: %s",palabra1);
    for (i=0;i<longitud;i++){
        printf("%s",palabra2);
    }
        printf("\n");
        return 0;
}