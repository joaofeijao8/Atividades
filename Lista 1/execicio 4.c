#include <stdio.h>
#include <stdlib.h>

/*
Faça um algoritmo que segundo uma nota informada pelo usuário, verifique em qual faixa a
mesma se encaixa e imprima para o usuário a mensagem correspondente conforme a tabela
abaixo:
*/


int main(){

    int Nota;

    scanf("%d", &Nota);

    if (Nota >= 8 && Nota <= 10)
        {
        printf("Otimo", Nota);
        }
    else if (Nota >= 7 && Nota <8 )
        printf("Bom", Nota);

    }else if (Nota >= 5 && Nota <7 ){
        printf("Regular", Nota);

    }else printf("Insatisfatorio", Nota);

}
