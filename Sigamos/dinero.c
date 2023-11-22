#include <stdio.h>

int main(){
    float ventas, ventaTotal = 0;

    do
    {
    printf("Ingrese la venta de este dia: ");
    scanf("%f" ,&ventas);
    ventaTotal += ventas;
    } while (ventas != 0);

    printf("Las ventas totales fueron: %f \n" ,ventaTotal);
    return 0;
}