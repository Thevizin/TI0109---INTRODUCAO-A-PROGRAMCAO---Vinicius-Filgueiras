#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/* 
Algoritmo
declare N, G, R, F como inteiros
para i de 0 ate 1000 faca
        escreva("para saber se um numero eh divisivel por outro forneca dois numeros ")
        leia(N)
        leia(G)
        
        se N % G = 0 entao
            escreva("Seu número é divisivel por", G)
        senao
            escreva("Seu número não é divisivel por", G)
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
    int N, G, R, F;
    for(int i = 0; i <= 1000; i++){
        printf("para saber se um numero eh divisivel por outro forneca dois numeros\n");
        scanf("%d",&N);
        scanf("%d",&G);
        if(N % G == 0){
        printf("%d eh divisivel por %d\n",N,G);
        }
        else{
            printf("%d nao eh divisivel por %d\n",N,G);
            }
        printf("digite 1 para continuar e 0 para parar\n");
        scanf("%d",&F);
        if(F == 0){
            break;
        }    
    }
}

