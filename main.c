#include <stdio.h>
#include <stdlib.h>

int main()
{
    float vhora;
    char nomE[50];
    int antiguedad;
    int choras;
    float importe;

    printf("Ingrese el valor de la hora de un empleado: ");
    scanf("%f", &vhora);
    system("cls");
    printf("Ingrese el nombre del empleado: ");             /// Aca pido todos los datos del empleado y el valor de la hora
    scanf("%s", &nomE);
    system("cls");
    printf("Ingrese la antiguedad: ");
    scanf("%i", &antiguedad);
    system("cls");
    printf("Ingrese la cantidad de horas trabajadas en el mes: ");
    scanf("%i", &choras);
    system("cls");

    if(antiguedad > 10)     ///Si la antiguedad es mayor que 10 entonces el importe tiene un valor agregado
    {
        importe = (float)(vhora * choras) + (antiguedad * 30);
    }
    else
    {
        importe = (float)vhora * choras;
    }

    printf("Nombre del empleado: %s \n", nomE);
    printf("Antiguedad: %i \n", antiguedad);            ///Muestro los datos
    printf("Importe a cobrar: %.2f \n", importe);




    return 0;
}
