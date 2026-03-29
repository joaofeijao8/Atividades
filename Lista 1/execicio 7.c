#include <stdio.h>
#include <stdlib.h>

/*f aça um programa para calcular e imprimir o valor de Y, dado um valor de X:
1 , se x ≤ 1
2 , se 1 < x ≤ 2
x2 , se 2 < x ≤ 3
x3 , se x > 3
*/

int main(){

    float x,y;

    scanf("%f",&x);

    if (x <= 1) y = 1;
    else if (1 < x && x <= 2) y = 2;
    else if (2 < x  && x <= 3) y = x * x;
    else y = x * x * x;

    printf("%.2f",y);

}
