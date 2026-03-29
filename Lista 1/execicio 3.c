#include <stdio.h>
#include <stdlib.h>

/*Faça um algoritmo que leia o ano de nascimento de uma pessoa e calcule sua idade, considerando o
ano atual. Para verificar se já fez aniversário no ano atual pergunte se a pessoa já fez aniversário,
sendo que ela pode entrar com a informação "S"(sim) ou "N"(não). Com isto é possível se ter
maior precisão sobre a idade. Imprima a idade da pessoa. Verifique também se a pessoa já tem
idade para conseguir Carteira de Habilitação (18 anos ou mais) e imprima a mensagem referente
a esta checagem ("Pode dirigir"ou "Nao pode dirigir").*/

int main(){

    int ano,idade;
    char c;

    scanf("%d %c",&ano,&c);

    idade = 2026 - ano;
    if (c == 'N') {
            idade = idade - 1;
    }

    printf("%d\n",idade);

    if (idade >= 18) {
            printf("Pode dirigir");
    }else {
        printf("Nao pode dirigir");
    }
}
