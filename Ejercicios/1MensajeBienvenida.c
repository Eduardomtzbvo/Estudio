#include <stdio.h>
int main() {
    #define PI 3.14; // las constantes no pueden ser cambiadas en ninguna parte del codigo
    //#define NOMBRE valor; --> Constante
    float sueldo = 15.5; //las variables si se pueden cambiar
    float bono = 4.5;
    sueldo +=bono; //sueldo = sueldo + bono
    printf("%f",sueldo);
    //TipoDato Nombre valor; --> Variable
    //Tipos de datos: Int = enteros (1) - Float = Reales (1.2) - Chat = letra o cadena de letras (HOLA)
    int edad = 43;
    int edad2 = 15;
    printf("Bienvenidos \n"); //si se pudo aaaaaaaaaj
    
    printf("\"La segunda edad es: %d - La primera es:\" %d",edad,edad2);

    
    return 0;
}