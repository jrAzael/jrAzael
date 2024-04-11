#include <stdio.h>

int main (){
    int i;
    int j;
    int ent;
        puts("ingresa un valor ");
        scanf("%d",&ent);
    for (i=0;i<ent;i++){
        //printf("*");
    for (j=0;j<=i;j++){
        printf("*");
    }
    printf("\n");
    
    }
    printf("\n");

     for (i=0;i<ent;i++){
        //printf("*");
    for (j=ent;j>i;j--){
        printf("*");
    }
    printf("\n");
    }
    return 0;
}