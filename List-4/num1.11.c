#include <stdio.h>
#include <math.h>

/* Codigo em portugol
algoritmo

var
    v: vetor[1..100] de inteiro
    nv: vetor[1..100] de inteiro
    t, t1, x, S, g: inteiro

inicio
    S <- 0

    escreva("Digite um valor máximo menor ou igual a 20: ")
    leia(t)

    escreva("Agora digite os valores para os coeficientes:")
    para i de 1 ate t+1 faca
        escreva("Coeficiente ", t+1-i, ": ")
        leia(t1)
        v[i] <- t1
    fim para

    para i de 1 ate 10 faca
        escreva("Digite um valor para X", i, ": ")
        leia(x)
        S <- 0
        para j de 1 ate t+1 faca
            g <- v[j] * potencia(x, t+1-j)
            S <- S + g
        fim para
        escreva("O valor de P quando x é igual a ", x, ": ", S)
    fim para

fim algoritmo

fim algoritmo
  */

int main() {
    int v[100], nv[100],t,t1,x,S=0,g;
    printf("digite um valor maximo menor ou igual a 20: ");
    scanf("%d",&t);
    printf("agora digite os valores para os coeficientes: \n");
    for (int i = 0; i <= t; i++) {
        printf(" Coeficiente %d: ", t-i);
        scanf("%d", &t1);
        v[i] = t1;
    }
    for(int i=0;i<10;i++){
        printf("digite um valor para X%d: ",i);
        scanf("%d",&x);
        for(int j=0; j<=t; j++){
            g= v[j]*pow(x,t-j);
            S=S+g;
        }
        printf("o valor de P quando x eh igual a %d: %d\n",x,S);

    }
    
   
    return 0;
}

