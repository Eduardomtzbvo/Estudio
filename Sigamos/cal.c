#include <stdio.h>

int main() {
    float peso;
    float altura;

    printf("Proporcione su peso en kilogramos (kg): ");
    scanf("%f", &peso);

    printf("Proporcione su altura en metros (m): ");
    scanf("%f", &altura);

    float masa = peso / (altura * altura);
    printf("Su indice de masa corporal es de: %f\n", masa);

    return 0;
}