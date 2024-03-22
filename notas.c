#include <stdio.h>
#include <stdlib.h>

#define NumeroAlumnos 35

int main() {
    double nota[NumeroAlumnos]; // 35 elementos numerados de 0 a 34
    double aprobados = 0; // Inicializar variables a 0
    double suspensos = 0; // Inicializar variables a 0
    int dieces = 0;
    int ceros = 0;
    int i = 0;

    puts ("Programa Notas de clase \n");

    // Extracción de datos de archivo
    FILE* fichero;
    fichero = fopen("c:\\notas.dat", "rt");
    if (fichero == NULL) {
        printf("Error al abrir el archivo.\n");
        return 1; // Salir del programa con código de error
    }
    for (i = 0; i < NumeroAlumnos; i++) {
        if (fscanf(fichero, "%lf", &nota[i]) != 1) {
            printf("Error al leer el archivo.\n");
            fclose(fichero);
            return 1; // Salir del programa con código de error
        }
        if (nota[i] >= 5) {
            aprobados += 1; // Se puede simplificar a aprobados++
        } else {
            suspensos += 1; // Se puede simplificar a suspensos++
        }
        if (nota[i] == 10) {
            dieces += 1;
        }
        if (nota[i] == 0) {
            ceros += 1;
        }
    }
    fclose(fichero);

    printf ("Porcentaje de aprobados es %lf %% \n", (aprobados / NumeroAlumnos) * 100);
    printf ("Porcentaje de suspensos es %lf %% \n", (suspensos / NumeroAlumnos) * 100);
    printf ("Obtienen un 10 un total de %d alumnos \n", dieces);
    printf ("Obtienen un 0 un total de %d alumnos \n", ceros);

    return 0; 
}
