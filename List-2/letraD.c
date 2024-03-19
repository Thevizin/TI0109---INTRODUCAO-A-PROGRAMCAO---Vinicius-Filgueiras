#include <stdio.h>
#include <math.h>

/*
   algaritmo em portugol
algaritmo
declare pk, pg
escreva "insira seu peso em kilogramas: "
leia pk
pg recebe pk*1000
escreva "seu peso em gramas eh: ", pg
fim_algoritmo
*/

int main(){
    float pk, pg;
    printf("insira seu peso em kilogramas: \n");
    scanf("%f",&pk);
    pg = pk*1000;
    printf("seu peso em gramas eh %.1f g",pg);

    return 0;
}