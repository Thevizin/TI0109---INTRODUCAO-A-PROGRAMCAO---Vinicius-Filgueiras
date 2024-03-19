#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/* 
declare A, B, C como reais
declare F como inteiro
Para i de 0 até 1000 faça
      escreva("Digite o tamanho em cm dos tres lados")
      leia(A)
      leia(B)
      leia(C)
      Se (A > B+C) ou (B > C+A) ou (C > B+A) então
         escreva("Não formam um triângulo")
      Senão
         escreva("Formam um triângulo ")
         Se (A = B) e (B = C) então
            escreva("e ele é equilátero")
         Senão Se (A = B) ou (B = C) ou (A = C) então
            escreva("e ele é isósceles")
         Senão
            escreva("e ele é escaleno")
         FimSe
      FimSe
      escreva("Digite 1 para continuar e 0 para parar")
      leia(F)
      Se F = 0 então
         interrompa
      Fim_condicional
   Fim_repetição
Fim_Algoritmo
*/

int main(){
    double A, B, C;
    int F;
    for(int i = 0; i <= 1000; i++){
        printf("Digite o tamanho em cm dos tres lados\n");
        scanf("%lf",&A);
        scanf("%lf",&B);
        scanf("%lf", &C);
        if(A > B+C){
        printf("não formam um triangulo");
        }
        else if(B > C+A){
        printf("nao formam um triangulo");
        }
        else if(C > B+A){
        printf("nao formam um triangulo");
        }
        else{
            printf("formam um triangulo ");
            if(A == B && B == C){
            printf("e ele eh equilatero\n");
        }
        else if((A == B && B != C) || (B == C && C != A) || (A == C && C != B)){
            printf("e ele eh isosceles\n");
        }
        else{
            printf("e ele eh escaleno\n");
        }
        }
        printf("digite 1 para continuar e 0 para parar\n");
        scanf("%d",&F);
        if(F == 0){
            break;
        }    
    }
}

