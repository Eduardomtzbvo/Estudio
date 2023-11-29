#include <stdio.h>
float calcularSuma(float numero1, float numero2);
float calcularResta(float numero1, float numero2);
float calcularMult(float numero1, float numero2);
float calcularDiv(float numero1, float numero2);

int main(){
    int eleccion;
    float numero1, numero2;
    float resultado;
    printf("Ingrese 1 si quiere sumar, 2 si quiere restar, 3 si quiere multiplicar y 4 si quiere dividir: ");
    scanf("%d" ,&eleccion);
    printf("Ingrese el primer numero: ");
    scanf("%f" ,&numero1);
    printf("Ingrese el segundo numero: ");
    scanf("%f" ,&numero2);

    if (eleccion == 1)
    {
        resultado = calcularSuma(numero1,numero2);
        printf("El resultado de la suma es: %f" ,resultado);
    } else
    if (eleccion == 2)
    {
        resultado = calcularResta(numero1,numero2);
        printf("El resultado de la resta es: %f" ,resultado);
    } else
    if (eleccion == 3)
    {
        resultado = calcularMult(numero1,numero2);
        printf("El resultado de la resta es: %f" ,resultado);
    } else
    if (eleccion == 4)
    {
        resultado = calcularDiv(numero1,numero2);
        printf("El resultado de la resta es: %f" ,resultado);
    }
    
    return 0;
}

float calcularSuma(float numero1, float numero2){

    float resultado;
    resultado = numero1 + numero2;
    return resultado;
}

float calcularResta(float numero1, float numero2){

    float resultado;
    resultado = numero1 - numero2;
    return resultado;
}

float calcularMult(float numero1, float numero2){
    float resultado;
    resultado = numero1 * numero2;
    return resultado;
}

float calcularDiv(float numero1, float numero2){
    float resultado;
    resultado = numero1 / numero2;
    return resultado;
}