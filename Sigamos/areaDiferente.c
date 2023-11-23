#include <stdio.h>
int areaTriangulo(int base, int altura);

int main(){

    int area1, area2, area3;
    area1 = areaTriangulo(5,7);
    area2 = areaTriangulo(4,5);
    area3 = areaTriangulo(6,8);
    printf("La primer area es: %d" ,area1);
    printf("La segunda area es: %d" ,area2);
    printf("La tercer area es: %d" ,area3);

    return 0;
}

int areaTriangulo(int base, int altura){
    int area;
    area = (base * altura) /2;
    return area;
}