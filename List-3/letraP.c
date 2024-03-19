#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/* 
Esse algoritmo não consegui fazer, infelizmente o resultado não entende o numero da operação arcocosseno e arcosseno

Algoritmo
declare A, B, C, a, b, c, J como reais
declare F como inteiro
J recebe 57.29
Para i de 0 até 1000 faça
    Escreva("Digite o tamanho em cm dos tres lados")
    Leia(A, B, C)
    Se (A > B + C) ou (B > C + A) ou (C > B + A) Então
        Escreva("Nao formam um triangulo")
    Senão
    Escreva("Formam um triangulo ")
    Se A * A = B * B + C * C ou B * B = A * A + C * C ou C * C = A * A + B * B então
        Escreva("e ele eh retangulo")
        Se A * A = B * B + C * C então // opção A
            a = Arcsin(B / C) * 180 / J
            b = 90 - a
            Escreva("os angulos de seu triangulo sao 90, ", a, " e ", b)
        Fim_condicional
        Se B * B = A * A + C * C então // opção B
            a = Arcsin(A / C) * 180 / J
            b = 90 - a
            Escreva("os angulos de seu triangulo sao 90, ", a, " e ", b)
        Fim_condicional
        Se C * C = B * B + A * A então // opção C
            a = Arcsin(B / A) * 180 / J
            b = 90 - a
            Escreva("os angulos de seu triangulo sao 90, ", a, " e ", b)
        Fim_condicional
        Senão
        Escreva("Nao temos um triangulo retangulo")
        Fim_condicional
    Fim_condicional 
    Escreva("Digite 1 para continuar e 0 para parar")
    Leia(F)
    Se F = 0 então
        Pare
    Fim_condicional
Fim_repeticao
Fim_algoritmo  

*/

int main() {
    double A, B, C, a, b, c, J;
    int F;
    J = 57.29;
    for (int i = 0; i <= 1000; i++) {
        printf("Digite o tamanho em cm dos tres lados\n");
        scanf("%lf", &A);
        scanf("%lf", &B);
        scanf("%lf", &C);
        if (A > B + C) {
            printf("nao formam um triangulo\n");
        } else if (B > C + A) {
            printf("nao formam um triangulo\n");
        } else if (C > B + A) {
            printf("nao formam um triangulo\n");
        } else {
            printf("formam um triangulo ");
            if (A * A == B * B + C * C || B * B == A * A + C * C || C * C == A * A + B * B) { //condicional do triangulo retangulo
                printf("e ele eh retangulo\n");
                if (A * A == B * B + C * C) {   //opção A
                    a = asin((double)B / C) * 180.0 / J;
                    b = 90 - a;
                    printf("os angulos de seu triangulo sao 90, %.2lf e %.2lf\n", a, b);
                }
                if (B * B == A * A + C * C) {   //opção b
                    a = asin((double)A / C) * 180.0/J;
                    b = 90 - a;
                    printf("os angulos de seu triangulo sao 90, %.2lf e %.2lf\n", a, b);
                }
                if (C * C == B * B + A * A) {   //opção c - não sei o que fazer para consertar isso
                    a = asin((double)B / A) * 180.0/J;
                    b = 90 - a;
                    printf("os angulos de seu triangulo sao 90, %.2lf e %.2lf\n", a, b);
                }
            } else{
                printf("Nao temos um triangulo retangulo");
            }
        }
        printf("digite 1 para continuar e 0 para parar\n");
        scanf("%d", &F);
        if (F == 0) {
            break;
        }
    }
    return 0;
}


