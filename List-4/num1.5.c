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
    unsigned long long int v[200],n1=1,n2=1,n3;
    v[0]=1;
    for (int i=1;i<50;i++){
      v[i]=n2;
      n3=n2;
      n2=n1+n2;
      n1=n3;
    }

    for(int i=0;i<50;i++){
      printf("%llu\n",v[i]);
    }
    
  

    
    return 0;
}



