#include <stdio.h>
#include <stdlib.h>

/*
Leia a velocidade máxima permitida em uma avenida e a velocidade com que o motorista estava
dirigindo nela. Se o motorista estiver dentro do limite de velocidade, imprima a mensagem “Motorista
respeitou a lei”. Se o motorista tiver ultrapassado a velocidade máxima permitida, calcule e imprima
o valor da multa a ser cobrada, sabendo que os valores a serem cobrados são os seguintes:
• 50 reais se o motorista ultrapassar em até 10km/h a velocidade permitida (ex: se a velocidade
máxima for 50km/h e o motorista estiver a 60km/h ou a 56km/h);
• 100 reais, se o motorista ultrapassar de 11 a 30 km/h a velocidade permitida;
• 200 reais, se estiver acima de 30km/h da velocidade permitida.
*/

int main(){

    int vel,velM;

    scanf("%d%d",&velM,&vel);

    if (vel > velM && vel <= velM + 10) printf("Multa de 50 reais");
    else if (vel >= velM + 11 && vel <= velM + 30) printf("Multa de 100 reais");
    else if (vel >= velM + 31) printf("Multa de 200 reais");
    else printf("Motorista respeitou a lei");




}
