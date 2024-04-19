#include <stdio.h>
#include <string.h>

int main (){
    int res;
    char str1[]="frase"; 
    char str2[]="nopales";
    res = strcmp(str1,str2);
    printf("resultado: %d \n",res);
    return 0;

}