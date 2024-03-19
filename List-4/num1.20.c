#include <stdio.h>
#include <math.h>

/* Codigo em portugol
algoritmo 
    var
        v: vetor[1..100] de inteiro
        n, p1, SM, SA, is, fs, it: inteiro

    inicio
        escreva("Digite o número de elementos na sequência: ")
        leia(n)

        escreva("Digite os números da sequência: ")
        para i de 1 ate n faca
            escreva("\nNúmero ", i, ": ")
            leia(p1)
            v[i] <- p1
        fim para

        SM <- v[1]
        SA <- v[1]
        is <- 1
        fs <- 1
        it <- 1

        para i de 2 ate n faca
            se v[i] > SA + v[i] entao
                it <- i
                SA <- v[i]
            senao
                SA <- SA + v[i]
            fim se

            se SA > SM entao
                is <- it
                fs <- i
                SM <- SA
            fim se
        fim para

        escreva("\n\nO segmento de soma máxima é: ")
        para i de is ate fs faca
            escreva(v[i], " ")
        fim para

        escreva("\nA soma do segmento é: ", SM)
    fim
fim algoritmo
  */

int main() {
    int v[100], nv[100],n,p1;
    printf("Digite o numero de elementos na sequencia: ");
    scanf("%d",&n);
    printf("Digite os numeros da sequencia: ");
    for(int i=0;i<n;i++){
        printf("\nnumero %d: ",i+1);
        scanf("%d",&p1);
        v[i]=p1;
    }
    int SM=v[0],SA=v[0],is=0,fs=0,it=0;
    printf("\n\n");
    for(int i=1;i<n;i++){
        if(v[i] > SA + v[i]){
            it = i;
            SA = v[i];
        }
        else{
            SA += v[i];
        }
        if(SA > SM){
            is = it;
            fs = i;
            SM = SA;
        }
    }
    printf("\n\nO segmento de soma maxima eh: ");
    for(int i=is;i<fs;i++){
        printf("%d ",v[i]);
    }
    printf("\nA soma do segmento eh: %d",SM);
    

    return 0;
}

