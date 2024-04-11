#include <stdio.h>

int main (){
    int i;
    int j;
    int n,m;
    int ope;
    printf("ingresa el valor N ");
    scanf("%d",&n);
    printf("ingresa el valor M ");
    scanf("%d",&m);
        for (i=1;i<=n;i++){
            for(j=1;j<=m;j++){
                ope=i*j;
            printf("%d\t",ope);
            }
            printf("\n\n");
        }
            printf("\n");
    return 0;
}