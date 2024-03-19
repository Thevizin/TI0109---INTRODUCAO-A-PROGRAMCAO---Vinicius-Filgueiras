#include <math.h>
#include <stdio.h>

/*
algoritmo
declare T numérico
escreva "digite o tamanho da matriz: "
leia T
declare M[T,T], M[T,T] numéricos
escreva "forneça os valores da matriz"
para i<-1 até T, faça
    inicio
    para j<-1 até T, faça
        inicio
        escreva "linha " i " coluna " j
        leia M[i,j]
        fim_para
    fim_para
para i<-1 até T, faça
    inicio
    para j<-1 até T, faça
        inicio
        M2[j,i] <- M[i,j]
        fim_para
    fim_para
para i<-1 até T, faça
    inicio
    para j<-1 até T, faça
        inicio
        escreva M2[i,j]
        fim_para
    fim_para
fim_algoritmo

*/

int main() {
    int T;
    printf("digite o tamanho da matriz: ");
    scanf("%d",&T);
    int M[T][T], M2[T][T];
    printf("forneça os valores da matriz: \n");
    for(int i=0; i<T; i++){
        for(int j=0; j<T; j++){
            printf("linha %d coluna %d: ",i+1,j+1);
            scanf("%d",&M[i][j]);
        }
    }
    for(int i=0; i<T; i++){
        for(int j=0; j<T; j++){
            M2[j][i]=M[i][j];
        }
    }
    for(int i=0; i<T; i++){
        for(int j=0; j<T; j++){
            printf("%d ",M2[i][j]);
        }
        printf("\n");
    }
}