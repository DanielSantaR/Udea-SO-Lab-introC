#include <stdio.h>

void main(){

    int control = 1;
    int valor = 0;

    while(control == 1){
        printf("Ingrese el total de las ventas: ");
        scanf("%d",&valor);
        printf("%d\n", valor);

        if(valor < 0){
            printf("El valor ingresado no es válido\n");
        } else if(valor < 20001){
            printf("La comisión es: %f\n" , valor*0.05);
            control = 0;
        } else if(valor < 50001){
            printf("La comisión es: %f\n" ,(valor*0.07)+1000);
            control = 0;
        } else {
            printf("La comisión es: %f\n" , (valor*0.1)+3100);
            control = 0;
        } 
    }
}