#include <stdio.h>
#define TAMANIO 10

int main(){
    int arreglo [TAMANIO];
    printf("Ingrese 10 numeros enteros");

    for (int i = 0; i < TAMANIO; i++)
    {
        printf("\narreglo[%d]: ",i);
        scanf("%d",&arreglo[i]);
    }
    printf("El arreglo ingresado es: ");
    for (int j = 0; j < TAMANIO; j++)
    {
        printf("\n arreglo[%d]=%d",j,arreglo[j]);
    }
    
    
    return 0;
}