#include <stdio.h>
#include <math.h>
/*
   algoritmo em portugol
algoritmo
declare p1, pct, pn
escreva "escreva o valor do produto a ser descontado"
leia p1
pct recebe p1/10
pn recebe p1 - pct
escreva "o novo valor do produto eh ", pn
fim_algoritmo
*/

int main(){
float p1, pct, pn;
printf("escreva o valor do produto a ser descontado\n");
scanf("%f", &p1);
pct = p1/10;
pn = p1 - pct;
printf("o novo valor do produto eh %.1f", pn);
}

