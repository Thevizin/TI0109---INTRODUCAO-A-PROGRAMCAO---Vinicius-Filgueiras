#include <stdio.h>
#include <math.h>
/*
algoritmo
declare L, C, E, EM, Em numéricos
declare
escreva "forneça a quantidade de linhas e colunas da matriz:"
declare R[6,3] real
 
para i <- 1 até 6 faça:
    início
    para j <- 1 até 3 faça:
        início
        escreva "elemento linha" i "coluna" j
        leia E
        R[i,j] <- E
        Se i=1 e j=1
            início
            Em <- E
            EM <- E
            fim_se
        Se E > EM
            EM <- E
        Se E < Em
            Em <- E
        fim_para
    fim_para
 escreva "o maior elemento da matriz é" Em ", o menor é Em"  
 fim_algoritmo         
*/
int main (){
int L, C, E, EM, Em;
printf("forneca a quantidade de linhas e colunas da matriz: \n");
float R[6][3];

for(int i=0; i<6; i++){
    for(int j=0; j<3; j++){
        printf("\nelemento linha %d coluna %d: ",i+1,j+1);
        scanf("%d",&E);
        R[i][j] = E;
        if(i==0 & j==0){
            Em= E;
            EM= E;
        }
        if(E > EM){
            EM= E;
        }
        if(E < EM){
            Em= E;
        }
    }
}

printf("o maior elemento da matriz eh: %d, o menor eh %d",EM, Em);

}