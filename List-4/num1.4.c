#include <stdio.h>
#include <math.h>

/* Codigo em portugol
Algoritmo maiorQueMedia
var
v: vetor[0..200] de real
g: inteiro
H, S, M: real
S <- 0.0
g <- -1

escreva("Forneça a altura dos 10 atletas:\n")

para i de 0 ate 9 faca
    leia(H)
    S <- S + H
    g <- g + 1
    v[i] <- H
fim para

M <- S / 10

para i de 0 ate 9 faca
    se v[i] > M entao
        escreva(v[i])
        escreva("\n")
    fim se
fim para
fim algoritmo
  */

int main() {
    int v[200],g=-1;
    double H, S=0.0,M;
    printf("forneça a altura dos 10 atletas:\n");
    for (int i=0;i<=9;i++){
      scanf("%lf",&H);
      S=S+H;
      g++;
      v[i]=H;
    }

    M=S/10;
    for(int i=0;i<10;i++){
      if(v[i]>M){
      printf("%d\n",v[i]);
    }
    }
  

    
    return 0;
}



