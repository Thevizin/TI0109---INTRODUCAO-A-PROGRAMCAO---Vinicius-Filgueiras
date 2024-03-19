#include <stdio.h>
#include <math.h>

/* Codigo em portugol
algoritmo

inteiro v[1000], nv[1000], t1
inteiro N
escreva "Quantos valores?"
leia N

para i de 0 até N-1 faça
    escreva "Numero ", i+1, ": "
    leia t1
    v[i] <- t1
fim para

inteiro t <- 1
inteiro r <- v[0]
nv[0] <- v[0]
inteiro s <- 0

para i de 1 até N-1 faça
    se v[i] = r então
        se N-i <> 1 então
            s <- s + 1
        senão
            s <- s + 1
            escreva "O numero ", v[i], " aparece repetido ", s, " vezes"
        fim se
    senão
        escreva "O numero ", v[i-1], " aparece repetido ", s, " vezes"
        s <- 0
        r <- v[i]
        nv[t] <- v[i]
        t <- t + 1
    fim se
fim para

escreva "Os novos valores são:"
para i de 0 até t-1 faça
    escreva nv[i], " "
fim para

fim algoritmo
  */

int main() {
    int v[1000], nv[1000], t1;
    int N;
    printf("Quantos valores? \n");
    scanf("%d", &N);

    for (int i = 0; i < 100; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &t1);
        v[i] = t1;
    }

    int t = 1;
    int r = v[0];
    nv[0] = v[0];
    int s = 0;

    for (int i = 1; i < N; i++) {
        if(v[i]==r){
            if(N-i!=1){
                s++;
            }
            else{
                s++;
                printf("o numero %d aparece repetido %d vezes\n",v[i],s);
            }
        }
        else{
            printf("o numero %d aparece repetido %d vezes\n",v[i-1],s);
            s=0;
            r=v[i];
            nv[t]=v[i];
            t++; 
        }

    }

    printf("Os novos valores sao:\n");
    for (int i = 0; i < t; i++) {
        printf("%d ", nv[i]);
    }
    
    return 0;
}


