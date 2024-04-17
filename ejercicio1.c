# include <stdio.h>
#define PI 3.1416
int y = 5; // variable global
int main (){
    int x = 10; // variable local

    float Suma = 0;
    Suma = PI + x;
    printf("la suma es: %f",Suma);
    return 0;

}