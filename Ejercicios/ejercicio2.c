//Realiza una programa para saber si el usuario es mayor de edad

#include <stdio.h>

int main() {
    int edad;
    char respuesta;

    printf("Ingrese su edad: ");
    scanf("%d", &edad);

    if (edad >= 18) {
        printf("Eres mayor de edad.\n");
    } else {
        printf("No eres mayor de edad.\n");
    }

    printf("Presione Y si quiere salir o N si quiere seguir usando el programa: ");
    scanf(" %c", &respuesta);

    if (respuesta == 'Y' || respuesta == 'y') {
        printf("Saliendo del programa...\n");
    } else if (respuesta == 'N' || respuesta == 'n') {
        printf("Continuando con el programa...\n");
    } else {
        printf("Respuesta no reconocida.\n");
    }

    return 0;
}