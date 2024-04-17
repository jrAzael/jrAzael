#include <stdio.h>
#include <string.h>
int main (){
  int i,j;
  int len;
  char cad[20];
  printf("ingresa una palabra :");
  scanf("%s",cad);
  len = strlen(cad);
  for (i=1;i<=len;i++){
    printf("\n");
  printf("*");
    for (j=1;j<len;j++){
  printf("*");
  }

  }
    printf("\n");
   return 0; 
}