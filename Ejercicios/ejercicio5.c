#include <stdio.h>

int main(){
    char letra;
    printf("Escriba una letra: ");
    scanf(" %c", &letra);
    switch (letra)
    {
    case 'a':
        printf("Es una vocal");
        break;
        case 'e':
        printf("Es una vocal");
        break;
        case 'i':
        printf("Es una vocal");
        break;
        case 'o':
        printf("Es una vocal");
        break;
        case 'u':
        printf("Es una vocal");
        break;
    default:
        printf("Es una consonante");
        break;
    }
return 0;
}