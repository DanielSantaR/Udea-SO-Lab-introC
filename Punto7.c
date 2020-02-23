#include <stdio.h>
#include <stdlib.h> 
#include <time.h> 

int mayor(int num1, int num2);
int menor(int num1, int num2);
int generar_aleatorios(int num1, int num2);

void main(){

    int num_1, num_2, respuesta, resultado;
    srand(time(NULL));

    while(1){

        num_1 = generar_aleatorios(1,10);
        num_2 = generar_aleatorios(1,10);
        resultado = num_1 * num_2;

        printf("¿Cuánto es %d veces %d? (Para acabar la ejecución ingrese 0): ", num_1, num_2);
        scanf("%d", &respuesta);

        if (respuesta==0)
        {       
            break;
        }

        while(resultado != respuesta){
            printf("Intenta de nuevo ¿Cuánto es %d veces %d? (Para acabar la ejecución ingrese 0): ", num_1, num_2);
            scanf("%d", &respuesta);

            if (respuesta==0){       
                break;
            }
        }
        if (respuesta==0){
            break;
        }
        
        printf("¡Muy bien, sigue así! ");
    }

}

int generar_aleatorios(int num1, int num2) {
    int num, M, m;
    
    M = mayor(num1, num2);
    m = menor(num1, num2);    
    num = rand()%(M - m + 1) + m;
    return num;
}

int mayor(int num1, int num2) {
    if(num1 >= num2) {
        return num1;
    }
    else {
        return num2;
    }
}

int menor(int num1, int num2) {
    if(num1 <= num2) {
        return num1;
    }
    else {
        return num2;
    }
}
