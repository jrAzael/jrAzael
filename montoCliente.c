
/* Calcular el monto a pagar por un cliente por el alquiler de una pelicula, si el retraso es por dos meses paga un interes del 2%,, si es de 3 meses 5%, 4 meses 7% y más de 4 meses 15%*/

#include <stdio.h>

main ()
{
char nombre[25];
int dias;
float m_pagar, interes=0, monto;

// entrada

printf ("\n Ingrese su nombre: ");
scanf ("%s", nombre);
printf ("\n Ingrese el numero de dias de retraso: ");
scanf ("%d",&dias);
printf ("\n Ingrese el monto que debe: ");
scanf ("%f",&monto);

// proceso

if (dias>30 && dias<=60)
{
interes= monto* 0.02;
}
else
if (dias>60 && dias<=90)
{
interes= monto*0.05;
}
else
if (dias>90 && dias<=120)
{
interes= monto*0.07;
}
else
if (dias>120)
{
interes= monto*0.15;
}
m_pagar=interes+monto;

// salida
printf ("\n Nombre: %s", nombre);
printf ("\n Dias: %d", dias);
printf ("\n Interes: %.2f", interes);
printf ("\n Monto : %.2f", monto);
printf ("\n Monto a pagar: %.2f \n", m_pagar);

/* fin del programa */

return 0;
// fin del main
}
