#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/* 
Algoritmo
declare A, B, C como numeros reais
declare F como inteiro
para i de 0 ate 1000 faca
        Escreva("Digite o tamanho em cm dos tres lados")
        Leia(A)
        Leia(B)
        Leia(C)
        
        Se A > B+C ou B > C+A ou C > B+A então
     Escreva("Não formam um triângulo")
  Senão
     Escreva("Formam um triângulo")
  Fim_condicional

  Escreva("Digite 1 para continuar e 0 para parar")
  Leia(F)
  Se F = 0 então
     Pare
  Fim_condicional


fim_algoritmo
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
            printf("formam um triangulo\n");
        }
        printf("digite 1 para continuar e 0 para parar\n");
        scanf("%d",&F);
        if(F == 0){
            break;
        }    
    }
}

