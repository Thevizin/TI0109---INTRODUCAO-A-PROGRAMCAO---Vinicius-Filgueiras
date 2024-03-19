#include <stdio.h>
#include <math.h>

/*
   algaritmo em portugol
algaritmo
declare B1, B2, H, A
escreva "informe o valor, em metros, das bases e da altura do trapezio, respectivamente"
leia B1
leia B2
leia H
A recebe (B1 + B2)*H/2
escreva "a area do trapezio = ", A
fim_algoritmo
*/

int main(){
    float B1, B2, H, A;
    printf("informe o valor, em metros, das bases e da altura do trapezio, respectivamente\n") ; 
    scanf("%f\n",&B1);
    scanf("%f\n",&B2);
    scanf("%f",&H);
    A = (B1 + B2)*H/2;
    printf("a area do trapezio eh igual a %.2f metros quadrados", A);

    return 0;
}