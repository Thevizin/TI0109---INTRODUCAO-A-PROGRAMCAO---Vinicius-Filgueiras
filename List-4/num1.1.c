#include <stdio.h>
#include <math.h>

/* Codigo em portugol
algoritmo numeros_decrescentes
    inteiro v[200], g, h

    g <- 200
    para i de 0 até 100 passo 1 faça
        v[i] <- g
        g <- g - 1
    fim para

    para i de 0 até 100 passo 1 faça
        escreva(v[i])
    fim para

fim algoritmo
  */

int main() {
    int v[200],g=200,h;
    for (int i=0;i<=100;i++){
      v[i]= g;
      g--;
    }
    for(int i=0;i<=100;i++){
      printf("%d\n",v[i]);
    }
  

    
    return 0;
}



