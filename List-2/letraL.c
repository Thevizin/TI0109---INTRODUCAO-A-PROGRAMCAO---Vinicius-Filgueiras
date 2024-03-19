#include <stdio.h>
#include <math.h>

/*
   algaritmo em portugol
algaritmo
declare SM, HT, HE, SB, GHE, GT
escreva "Qual o valor do salario minimo? "
leia SM
escreva "quantas horas voce trabalhou? "
leia HT
escreva "e horas extras? "
leia HE
SB recebe HT*SM/8
GHE recebe HE*SM/4
GT recebe SB+GHE
escreva ("o seu salario bruto eh de ",SB)
escreva ("em horas extras, voce ganha um adicional de ",GHE)
escreva ("portanto, seu salario eh de ",GT)
fim_algoritmo
*/

int main() {
    float SM, HT, HE, SB, GHE, GT;
    printf("Qual o valor do salario minimo? ");
    scanf("%f",&SM);
    printf("quantas horas voce trabalhou? ");
    scanf("%f",&HT);
    printf("e horas extras? ");
    scanf("%f",&HE);
    SB= HT*SM/8;
    GHE= HE*SM/4;
    GT= SB+GHE;
    printf("o seu salario bruto eh de %.2f\n",SB);
    printf("em horas extras, voce ganha um adicional de %.2f\n",GHE);
    printf("portanto, seu salario eh de %.2f\n",GT);
    return 0;

}
        

    