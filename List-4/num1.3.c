#include <stdio.h>
#include <math.h>

/* Codigo em portugol
Algoritmo vetorQuadradosImpares
var
v: vetor[0..200] de inteiro
g: inteiro
g <- -1

para i de 1 ate 20 faca
    se i % 2 <> 0 entao
        g <- g + 1
        v[g] <- i * i
    fim se
fim para

para i de 0 ate g faca
    escreva(v[i])
    escreva("\n")
fim para
  */

int main() {
    int v[200],g=-1;
    for (int i=1;i<=20;i++){
      if(i%2!=0){
        g++;
        v[g]=i*i;
      }
    }
    for(int i=0;i<=g;i++){
      printf("%d\n",v[i]);
    }
  

    
    return 0;
}



