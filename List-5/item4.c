/*Criar um programa que leia os elementos de uma matriz inteira 4 x 4 e escreva
 * os elementos da diagonal secundária
 */
#include <math.h>
#include <stdio.h>
/*
algoritmo
    início
    declare H[4,4], C, M, E numéricos
    para i <- 1 até 4, faça
        início
        para j <- 1 até 4, faça
            início
            escreva "elemento linha" i "coluna" j
            leia E
            H[i,j] <- E
            fim_para
        fim_para
    para i <- 1 até 4, faça
        início
        C <- 3-i
        escreva H[i,C]
        fim_para
    fim_algoritmo

*/
int main() {
  int H[4][4], C, M, E;
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      printf("\nelemento linha %d coluna %d: ", i + 1, j + 1);
      scanf("%d", &E);
      H[i][j] = E;
    }
  }
  for(int i=0; i<4; i++){
    C=3-i;
    printf("%d\n",H[i][C]);
  }
}