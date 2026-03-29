#include <stdio.h>
#include <stdlib.h>

//Faça um programa para ler os coeficientes de uma equação do primeiro grau (ax + b = 0),
//calcular e escrever a raiz da equação.


int main(){

    float a,b,x;

    scanf("%f%f",&a,&b);

    x = -b / a;

    printf("%.2f",x);

}
