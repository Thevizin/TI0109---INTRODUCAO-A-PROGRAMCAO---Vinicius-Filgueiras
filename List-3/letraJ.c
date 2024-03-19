#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/* 
Algoritmo
declare N, R, F como inteiros
para i de 0 ate 1000 faca
        escreva("Digite um número: ")
        leia(N)
        
        se N % 3 = 0 entao
            escreva("Seu número é multiplo de 3")
        senao
            escreva("Seu número não é multiplo de 3")
        fim_condicional
        
        escreva("Digite 1 para continuar e 0 para parar: ")
        leia(F)
        
        se F = 0 entao
            interrompa
        fim_condicional
        
    fim_repetição


fim_algoritmo
*/

int main(){
    int N, R, F;
    for(int i = 0; i <= 1000; i++){
        printf("digite um numero ");
        scanf("%d",&N);
        if(N % 3 == 0){
        printf("seu numero eh multiplo de 3\n");
        }
        else{
            printf("seu numero nao eh multiplo de 3\n");
            }
        printf("digite 1 para continuar e 0 para parar\n");
        scanf("%d",&F);
        if(F == 0){
            break;
        }    
    }
}

