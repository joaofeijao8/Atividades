#include <stdio.h>
#include <stdlib.h>

//Faça um algoritmo que leia 2 números inteiros e faça sua adição. Se o resultado for maior ou
//igual a 10, some 5 a este número. Caso contrário some 7 a ele. Imprima o resultado final.

int main(){

    int a,b,s;

    scanf("%d%d",&a,&b);

    s = a + b;

    if (s >= 10){
        s = s + 5;
    }else s = s+7;

    printf("%d",s);
}
