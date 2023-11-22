#include <stdio.h>

int main(){

    int numero;
    int respuesta;

    printf("Escribe un numero que vaya del \"1\" al \"7\" \n");
    scanf("%d" ,&numero);

    if (numero ==1)
    {
        printf("Es Lunes \n");
    } else
    if (numero==2)
    {
        printf("Es Martes\n");
    }else
    if (numero==3)
    {
        printf("Es Miercoles\n");
    }else
    if (numero==4)
    {
        printf("Es Jueves\n");
    }else
    if (numero==5)
    {
        printf("Es Viernes\n");
    }else
    if (numero==6)
    {
        printf("Es Sabado\n");
    }else
    if (numero==7)
    {
        printf("Es Domingo\n");
    }else{
        printf("El numero que usted proporciono no corresponde a ningun dia\n");
    };
    /*Igual se podria con switch*/
    return 0;
}