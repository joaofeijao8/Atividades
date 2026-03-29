#include <stdio.h>
#include <stdlib.h>

/*Construa um programa que lê uma opção conforme abaixo (usar estrutura SWITCH) e o salário atual
do funcionário, calcula e exibe o novo salário:
A = aumento de 8% no salário;
B = aumento de 11% no salário;
C = aumento fixo no salário (de R$ 350,00 se o salário atual for até R$ 1000 e de R$ 200,00
se o salário atual for maior que R$ 1000).
*/

int main(){
    char x;
    float sal,nov_sal;

    scanf("%c %f",&x,&sal);

    switch (x) {

    case 'A':
        nov_sal = sal * 1.08;
        break;

    case 'B':
        nov_sal = sal * 1.11;
        break;

    case 'C':
        if (sal <= 1000) nov_sal = sal + 350;
        else nov_sal = sal + 200;
        break;
    }

    printf("%.2f\n",nov_sal);


}
