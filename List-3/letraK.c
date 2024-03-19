#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/* 
Algoritmo
declare N, R, F como inteiros
para i de 0 ate 1000 faca
        escreva("Digite um número: ")
        leia(N)
        
        se N % 5 = 0 entao
            escreva("Seu número é divisivel por 5")
        senao
            escreva("Seu número não é divisivel por 5")
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
        if(N % 5 == 0){
        printf("seu numero eh divisivel por 5\n");
        }
        else{
            printf("seu numero nao eh divisivel por 5\n");
            }
        printf("digite 1 para continuar e 0 para parar\n");
        scanf("%d",&F);
        if(F == 0){
            break;
        }    
    }
}

