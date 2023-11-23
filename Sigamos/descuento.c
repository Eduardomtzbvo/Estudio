#include <stdio.h>
int calcularDescuento(float precio, int descuento);

int main(){
    float precio, precioFinal, descontado;
    int descuento;
    printf("\n Introduzca el precio del articulo: ");
    scanf("%f" ,&precio);
    printf("\n Introduzca el descuento que tiene el articulo: ");
    scanf("%d" ,&descuento);
    precioFinal = calcularDescuento(precio, descuento);
    printf("\n El precio que tiene que pagar por su articulo es: %f" ,precioFinal);
    return 0;
}

int calcularDescuento(float precio, int descuento){
    float precioFinal;
    float descontado;
    descontado = (precio * descuento) / 100;
    precioFinal = precio - descontado;
    return precioFinal;
}