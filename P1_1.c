#include <stdio.h>

void main(){
    int valor;
    int res = 0;
    printf("Ingrese el número: ");
    scanf("%d",&valor);
    printf("%d\n", valor);

    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= valor; j++)
        {
            res = i*j;
            if (j == valor){
                printf("%d x %d = %d", i, j, res);
            } else {
                printf("%d x %d = %d, ", i, j, res);
            }    
            res = 0;
        }
        
        printf("\n");
        
    }
    
}