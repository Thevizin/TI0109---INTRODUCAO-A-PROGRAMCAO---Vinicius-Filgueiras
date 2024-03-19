#include <stdio.h>
#include <math.h>

/* Codigo em portugol

algoritmo somatorio_diferencas

var
    v: vetor[1..100] de inteiro
    nv: vetor[1..50] de inteiro
    t1, N: inteiro

inicio
    N <- 0

    para i de 1 ate 100 faca
        escreva("Numero ", i, ": ")
        leia(t1)
        v[i] <- t1
    fim para

    para i de 1 ate 50 faca
        nv[i] <- v[i] - v[101 - i]
    fim para

    para i de 1 ate 50 faca
        N <- N + nv[i]
    fim para

    escreva("O valor do somatório: ", N)
fim algoritmo
  */

int main() {
    int v[100], nv[100], t1;
    int N=0;
    for (int i = 0; i < 100; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &t1);
        v[i] = t1;
    }
    for(int i=0;i<50;i++){
        int z=i+1;
        nv[i]=v[i]-v[99-i];
    }
    for(int i=0;i<50;i++){
        N=N+nv[i];
    }
    printf("o valor do somatorio: %d",N);

   
    return 0;
}

