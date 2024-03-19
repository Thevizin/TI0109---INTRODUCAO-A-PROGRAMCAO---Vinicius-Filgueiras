#include <stdio.h>
#include <math.h>

/* Codigo em portugol
algoritmo vetorDecrescente
    var
        v: vetor[0..200] de inteiro
        g: inteiro
    
    g <- -1
    
    para i de 200 ate 100 passo -1 faca
        g <- g + 1
        v[g] <- i
    fim para
    
    para i de 0 ate g faca
        escreva(v[i])
        escreva("\n")
    fim para
fim algoritmo
  */

int main() {
    int v[200],g=-1;
    for (int i=1;i<=500;i++){
      if(i%5==0){
        g++;
        v[g]=i;
      }
    }
    for(int i=0;i<=g;i++){
      printf("%d\n",v[i]);
    }
  

    
    return 0;
}



