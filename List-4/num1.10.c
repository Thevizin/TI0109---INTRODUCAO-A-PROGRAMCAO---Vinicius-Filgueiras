#include <stdio.h>
#include <math.h>

/* Codigo em portugol
algoritmo faturamento_mensal

var
    p: vetor[1..100] de real
    s: real
    q: vetor[1..100] de inteiro
    t1, N: inteiro

inicio
    s <- 0

    escreva("Digite o valor de venda e a quantidade vendida")
    para i de 1 ate 100 faca
        escreva("Para o produto ", i, ": ")
        leia(p[i], q[i])
    fim para

    para i de 1 ate 100 faca
        t1 <- p[i] * q[i]
        s <- s + t1
    fim para

    escreva("O faturamento mensal foi de: ", s)

fim algoritmo
  */

int main() {
    double p[100],s=0;
    int q[100], t1;
    int N=0;
    printf("digite o valor de venda e a qauntidade vendida\n");
    for (int i = 0; i < 100; i++) {
        printf("para o produto %d: ",i+1);
        scanf("%lf %d",&p[i],&q[i]);
    }
    for(int i = 0; i < 100; i++) {
        double t=p[i]*q[i];
        s=s+t;
    }
    printf("o faturamento mensal foi de: %.2lf",s);
    
   
    return 0;
}


