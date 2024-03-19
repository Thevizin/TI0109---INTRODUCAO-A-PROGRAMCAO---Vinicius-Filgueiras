#include <stdio.h>
#include <math.h>

/*
   algaritmo em portugol
algaritmo
declare F, C
escreva "informe a temperatura em celsius: "
leia C
F recebe (9*C+160)/5
escreva ("a temperatura eh de" F "graus Fahrenheit")
fim_algoritmo
*/

int main() {
    float F, C;
    printf("informe a temperatura em celsius: ");
    scanf("%f",&C);
    F=(9*C+160)/5;
    printf("a temperatura eh de %.2f graus Fahrenheit",F);
}
        

    