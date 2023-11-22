#include <stdio.h>
int main() {
    float examen1;
    float examen2;
    float resultado;
    printf("Introduzca la nota del primer examen: ");
    scanf("%f", &examen1);

    printf("Introduzca la nota del segundo examen: ");
    scanf_s("%f", &examen2);

    float promedio = (examen1 + examen2) / 2;

    printf("Tu promedio es de: %f", promedio);
    scanf("%f" ,&resultado);
    
    return 0;
}