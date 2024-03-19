#include <stdio.h>
#include <math.h>

/*
   algaritmo em portugol
algaritmo
declare AN, I, IM, ID, IS, A
escreva "informe o a ano corrente: "
leia A
escreva "informe o ano do seu nascimento: "
leia AN
I recebe A-AN
escreva ("voce tem" I "anos de vida")
IM recebe I*12
escreva ("voce tem" IM "meses de vida")
ID recebe I*365
escreva ("voce tem" ID "dias de vida")
IS recebe ID/7
escreva ("voce tem" IS "semanas de vida")
fim_algoritmo
*/

int main() {
    long int AN, I, IM, ID, IS, A;
    printf("informe o a ano corrente: ");
    scanf("%ld",&A);
    printf("informe o ano do seu nascimento: ");
    scanf("%ld",&AN);
    I=A-AN;
    printf("\nvoce tem %ld anos de vida\n",I);
    IM=I*12;
    printf("voce tem %ld meses de vida\n",IM);
    ID=I*365;
    printf("voce tem %ld meses de vida\n",ID);
    IS=ID/7;
    printf("voce tem %ld semanas de vida\n",IS);
    return 0;
}
        

    