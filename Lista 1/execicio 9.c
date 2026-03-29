#include <stdio.h>
#include <stdlib.h>

/*
Fazer um programa para:
• ler um símbolo do teclado;
• identificar com a estrutura SWITCH e mostrar as seguintes mensagens, segundo o caso:
– "SINAL DE MENOR"
– "SINAL DE MAIOR"
– "SINAL DE IGUAL"
– "OUTRO SINAL"
*/

int main(){

    char x;

    scanf("%c",&x);

    switch (x){

        case '<':
            printf("SINAL DE MENOR");
            break;

        case '>':
            printf("SINAL DE MAIOR");
            break;

        case '=':
            printf("SINAL DE IGUAL");
            break;

        default:
            printf("OUTRO SINAL");
            break;
    }



}
