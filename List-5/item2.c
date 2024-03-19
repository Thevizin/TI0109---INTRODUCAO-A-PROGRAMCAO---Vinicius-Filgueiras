/*Criar um programa que leia os elementos de uma matriz inteira 4 x 4 e escreva
todos os elementos, exceto os elementos da diagonal principal.
*/

#include <stdio.h>
#include <math.h>

/*
algoritmo
    início
    declare M[4,4], G, E numéricos
    escreva "digite os elementos da matriz: "
    para i <- 1 até 4 faça:
        início
        para j <- 1 até 4 faça:
            início
            escreva "elemento linha" i "coluna" j
            leia E
            M[i,j] <- E
            fim_para
        fim_para
    para i <- 1 até 4 faça:
        início
        para j <- 1 até 4 faça:
            início
            se j = i
                escreva M[i,j]
            fim_para
        fim_para
    fim_algoritmo

*/
int main(){
  int M[4][4], G, E;
  printf("digite os elementos da matriz: ");
  for(int i=0; i<4; i++){
    for(int j=0; j<4; j++){
        printf("\nelemento linha %d coluna %d: ",i+1,j+1);
        scanf("%d",&E);
        M[i][j] = E;
      }
  }
  for(int i=0; i<4; i++){
    for(int j=0; j<4; j++){
        if(j==i){
          printf("%d\n",M[i][j]);
        }
      }
  }
}