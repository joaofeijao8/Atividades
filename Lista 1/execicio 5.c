#include <stdio.h>
#include <stdlib.h>

/*Um hotel com 80 apartamentos deseja fazer uma promoção especial de final de semana, conce-
dendo um desconto de 25% na diária. Com isto, espera aumentar sua taxa de ocupação de 50%
para 80%. Sendo dado o valor normal da diária, calcular e imprimir:
a) o valor da diária promocional;
b) o valor total arrecadado com 80% de ocupação e diária promocional;
c) o valor total arrecadado com 50% de ocupação e diária normal;
d) a diferença entre estes dois valores.*/


int main(){

    float val_dia,val_pro,arr_pro,arr_dia,dif;

    scanf("%f",&val_dia);

    val_pro = val_dia * 0.75;
    printf("Valor promocional: %.2f\n",val_pro);

    arr_pro = (80 * 0.8) * val_pro;
    printf("Promocional com 80%% ocupado: %.2f\n",arr_pro);

    arr_dia = (80 * 0.5) * val_dia;
    printf("Normal com 50%% ocupado: %.2f\n",arr_dia);

    if (arr_dia >= arr_pro) dif = arr_dia - arr_pro;
    else dif = arr_pro - arr_dia;

    printf("Diferenca entre os valores: %.2f\n",dif);

    return 0;
}




