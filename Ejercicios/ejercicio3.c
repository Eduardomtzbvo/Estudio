//Realiza un programa que determine si un numero es par o impar
#include <stdio.h>

int main() {
    int numero;
    char respuesta;

    printf("Escriba el número: ");
    scanf("%d", &numero);

    if (numero % 2 == 0) {
        printf("El número es par.\n");
    } else {
        printf("El número no es par.\n");
    }

    printf("Escriba 'Y' si quiere continuar usando el programa, y escriba 'N' si no quiere continuar: ");
    scanf(" %c", &respuesta);

    if (respuesta == 'Y' || respuesta == 'y') {
        printf("Continuando...\n");
    } else if (respuesta == 'N' || respuesta == 'n') {
        printf("Saliendo del programa...\n");
    } else {
        printf("Respuesta no reconocida.\n");
    }

    return 0;
}