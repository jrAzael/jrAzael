#include <stdio.h>

int main (){


    int dato;
    int res;
    int i;
        printf("ingresa un dato");
        scanf("%d",&dato);
    for (i=1; i<dato;i++){    
     res=res+i;
    printf("%d+",i);
    }
    printf("=%d\n",res);
    return 0;
}
