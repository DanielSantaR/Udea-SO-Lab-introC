#include <stdio.h>


void main()
{
    int numeroIngresado;
    int numeroReves = 0;
    int aux = 0;

    printf("Ingrese el número: ");
    scanf("%d", &numeroIngresado);
    int ingresadoSave = numeroIngresado;
    while (numeroIngresado > 0)
    {
        aux = numeroIngresado % 10;
        numeroIngresado = numeroIngresado / 10;
        numeroReves = numeroReves * 10 + aux;        
    }

    printf("El numero ingresado es: %d y el número al revés es: %d \n", ingresadoSave, numeroReves);
}