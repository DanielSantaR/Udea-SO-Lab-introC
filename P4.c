#include <stdio.h>

int potencia(int a, int b){
        int result = 1;
        for (int i = 0; i < b; i++)
        {
                result = result * a;
        }
        return result;  

}

void main()
{
        int x;
        printf("Ingrese el valor de x: ");
        scanf("%d", &x);
        int n;
        printf("Ingrese el valor de n: ");
        scanf("%d", &n);
        int res=0;
        for (int i = 0; i <= n; i++)
        {
                res = res + potencia(x,i);              
        }
        printf("La suma de la progresión geométrica es: %d \n", res);        
}