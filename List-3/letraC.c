#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/* 
algoritmo
    
        declare SM, C como numeros reais
        escreva("Digite o valor de seu saldo médio, para calcularmos o crédito a ser recebido: ")
        leia(SM)

        se SM > 400.00 entao
            C recebe SM * 0.30
            escreva("Seu crédito é de ", C, " reais.")
        senao se SM > 300.00 e SM < 400.00 entao
            C recebe SM * 0.25
            escreva("Seu crédito é de ", C, " reais.")
        senao se SM > 200.00 e SM < 300.00 entao
            C recebe<- SM * 0.20
            escreva("Seu crédito é de ", C, " reais.")
        senao
            C recebe SM * 0.10
            escreva("Seu crédito é de ", C, " reais.")
        fim_condicional

fim_algaritmo
*/

int main(){
double SM, C;
printf("digite o valor de seu saldo medio, para calcularmos o credito a ser recebido: ");
scanf("%lf",&SM);
if(SM > 400.00){
    C = SM*0.30;
    printf("seu credito eh de %.2lf",C);
}
else if(SM > 300.00 && SM < 400.00){
    C = SM*0.25;
    printf("seu credito eh de %.2lf",C);
}
else if(SM > 200.00 && SM < 300.00){
    C = SM*0.20;
    printf("seu credito eh de %.2lf",C);
}
else{
    C = SM*0.10;
    printf("seu credito eh de %.2lf",C);
}
}