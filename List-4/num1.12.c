#include <stdio.h>
#include <math.h>

/* Codigo em portugol
algoritmo
var
    v: vetor[1..100] de inteiro
    nv: vetor[1..100] de inteiro
    t, t1, x, S, g, r, temp: inteiro

inicio
    S <- 0

    escreva("Digite um valor máximo menor ou igual a 20: ")
    leia(t)

    escreva("Agora digite os valores para os coeficientes:")
    para i de 1 ate t faca
        escreva("Coeficiente ", t+1-i, ": ")
        leia(t1)
        v[i] <- t1
    fim para

    escreva("Digite um número k para usarmos de comparativo: ")
    leia(x)
    x <- x - 1

    escreva("O valor do número na posição ", x+1, "-ésima é: ", v[x])

    g <- v[1]
    para i de 1 ate t - 1 faca
        para j de i + 1 ate t faca
            se v[i] > v[j] entao
                temp <- v[i]
                v[i] <- v[j]
                v[j] <- temp
            fim se
        fim para
    fim para

    escreva("Valor ordenado:")
    para i de 1 ate t faca
        escreva("Valor ", i, ": ", v[i])
    fim para

    escreva("O valor do número na posição ", x+1, "-ésima é: ", v[x])

fim algoritmo


  */

int main() {
    int v[100], nv[100],t,t1,x,S=0,g,r,temp;
    printf("digite um valor maximo menor ou igual a 20: ");
    scanf("%d",&t);
    printf("agora digite os valores para os coeficientes: \n");
    for (int i = 0; i < t; i++) {
        printf(" Coeficiente %d: ", t-i);
        scanf("%d", &t1);
        v[i] = t1;
    }
    printf("digite um numero k para usarmos de comparativo: ");
    scanf("%d",&x);
    x--;
    printf("o valor do numero na posiçao %d-esima eh: %d\n",x,v[x]);
    g=v[0];
    for (int i = 0; i < t - 1; i++) {
        for (int j = i + 1; j < t; j++) {
            if (v[i] > v[j]) {
                temp = v[i];
                v[i] = v[j];
                v[j] = temp;
            }
        }
    }
    printf("valor ordenado: \n");
    for(int i=0;i<t;i++){
        printf("valor %d: %d\n",i+1,v[i]);
    }
    printf("o valor do numero na posiçao %d-esima eh: %d\n",x,v[x]);
    
   
    return 0;
}

