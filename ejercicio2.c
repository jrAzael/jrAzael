#include<stdio.h>
int main (){
    int arre[100];
    int i =0;
    int mul=0;

    while (i<=100)
    {
      arre[i]=mul;
      printf("2 * %d = %d \n",i,arre[i]);
      i++;
      mul+=2;
    }
    
}