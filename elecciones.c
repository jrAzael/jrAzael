

/* Elecciones de 3 candidatos, calcular: total de votos de cada candidato, total de votos en las elecciones y el candidato ganador*/

#include <stdio.h>
int main ()
{
char resp;
int opc, voto_a=0, voto_b=0, voto_c=0, voto_nulo=0, ci, voto_ganador, igualci=0;

do
{
do
{
printf ("Ingrese el numero de cedula: ");
scanf ("%d", &ci);
if (igualci == ci)
{
printf ("\n\aNumero de cedula ya procesado introduzca otro numero de cedula.\n");
}
} while (igualci == ci);
igualci=ci;
printf ("\nA continuacion se le mostrara en pantalla la lista de candidatos ");
printf ("\n1.-Candidato a: ");
printf ("\n2.-Candidato b: ");
printf ("\n3.-Candidato c: ");
printf ("\nIngrese un numero segun el candidato por el cual usted desea votar: ");
scanf ("%d", &opc);
printf ("\nGracias por su voto. ");
if (opc == 1)
{
voto_a=voto_a+1;
} else
if (opc == 2)
{
voto_b=voto_b+1;
} else
if (opc == 3)
{
voto_c=voto_c+1;
} else
{
voto_nulo=voto_nulo+1;
}
system ("cls");
printf ("Pulse [s] para votar: ");
scanf ("%c", &resp);
system ("cls");
} while (resp == 's');
system ("pause");

if (voto_a>voto_b)
{
voto_ganador=voto_a;
printf ("\nEl Candidato ganador es: Candidato a con %d votos ", voto_ganador);
} else
if (voto_b>voto_c)
{
printf ("\nEl Candidato ganador es: Candidato b con %d votos", voto_b);
} else
if (voto_c>voto_a)
{
printf ("\nEl Candidato Ganador es: Candidato c con %d votos", voto_c);
} else
if (voto_a == voto_b && voto_a == voto_c)
{
printf ("\nHay un empate entre todos los candidatos con %d votos cada uno.", voto_a);
} else
if (voto_a == voto_b)
{
printf ("\nHay un empate entre los candidatos a y b con %d votos cada uno.", voto_a);
} else
if (voto_a == voto_c)
{
printf ("\nHay un empate entre los candidatos a y c con %d votos cada uno.", voto_a);
}
if (voto_a<voto_b && voto_a>voto_c)
{
printf ("\nEl Segundo candidato es: Candidato a con %d votos.", voto_a);
} else
if (voto_b<voto_a && voto_b>voto_c)
{
printf ("\nEl Segundo candidato es: Candidato b con %d votos.", voto_b);
} else
if (voto_c<voto_a && voto_c>voto_b)
{
printf ("\nEl Segundo candidato es: Candidato c con %d votos.", voto_c);
}
if (voto_a == voto_b)
{
printf ("\nHay un empate entre los candidatos a y b con %d votos cada uno.", voto_a);
} else
if (voto_a == voto_c)
{
printf ("\nHay un empate entre los candidatos a y c con %d votos cada uno.", voto_a);
} else
if (voto_a<voto_b)
{
printf ("\nEl Tercer candidato es: Candidato a con %d votos.", voto_a);
} else
if (voto_b<voto_c)
{
printf ("\nEl Tercer candidato es: candidato b con %d votos.", voto_b);
} else
if (voto_c<voto_a && voto_c<voto_b)
{
printf ("\nEl Tercer candidato es: Candidato c con %d votos.", voto_c);
} else
if (voto_b == voto_c && voto_b == voto_a)
{
printf (" ");
} else
if (voto_b == voto_c)
{
printf ("\nHay un empate entre los candidatos b y c con %d cada uno.", voto_b);
}
printf ("\nVotos nulos: %d\n", voto_nulo);
system ("pause");
return 0;
}
