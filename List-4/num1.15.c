#include <stdio.h>
#include <math.h>

/* Codigo em portugol
algoritmo
    var
        v: vetor[1..100] de inteiro
        nv: vetor[1..100] de inteiro
        t, t1, x, S, g, r: inteiro
        soma, med, var, dp: real
        i: inteiro

    soma <- 0
    var <- 0

    escreva("Digite um valor máximo de valores: ")
    leia(t)

    escreva("Agora digite os valores:")

    para i <- 1 até t faça
        escreva("Coeficiente ", i, ": ")
        leia(t1)
        v[i] <- t1
        soma <- soma + t1
    fimPara

    med <- soma / t

    para i <- 1 até t faça
        var <- var + (v[i] - med)^2
    fimPara

    var <- var / t
    dp <- raizQuadrada(var)

    escreva("O valor da média é: ", med)
    escreva("O valor da variância é: ", var)
    escreva("O valor do desvio padrão é: ", dp)
    
fim_Algoritmo
  */

int main() {
    int v[100], nv[100],t,t1,x,S=0,g,r;
    double soma=0,med,var,dp;
    printf("digite um valor maximo de valores: ");
    scanf("%d",&t);
    printf("agora digite os valores: \n");
    for (int i = 0; i < t; i++) {
        printf(" Coeficiente %d: ",i+1);
        scanf("%d", &t1);
        v[i] = t1;
        soma += t1;
    }
    med=soma/t;
    for(int i=0; i<t; i++){
        var += pow(v[i]-med,2);
    }
    var /= t;
    dp = sqrt(var);
    printf("O valor da media eh: %.2lf\nO valor da variancia eh: %.2lf\nO valor do desvio padrao eh: %.2lf\n",med,var,dp);

    return 0;
}

