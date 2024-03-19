#include <stdio.h>
#include <math.h>

/* Codigo em portugol
    algoritmo 

    var
        X: vetor[1..100] de inteiro
        Y: vetor[1..100] de inteiro
        g, a, n, c, N, M, K: inteiro

    inicio
        para g de 1 ate 100 faca
            X[g] <- 0
        fimpara

        escreva("Digite o número de candidatos: ")
        leia(N)

        repita
            escreva("\nDigite o número do seu candidato (0 para encerrar): ")
            leia(g)
            se g = 0 entao
                interrompa
            fimse
            para j de 1 ate N faca
                se g = j entao
                    X[j] <- X[j] + 1
                fimse
            fimpara
        ate verdadeiro

        n <- X[1]
        c <- 0
        para i de 2 ate N faca
            se X[i] > n entao
                n <- X[i]
                c <- i
            fimse
        fimpara

        escreva("O candidato ", c, " venceu a eleição com ", n, " votos")

    fim

fim_algoritmo
  */


int main() {
    int X[100]={0},Y[100],g,a=0,n,c,N,M=0,K=0;
    printf("digite o numero de candidatos: ");
    scanf("%d",&N);

    for(;;){
        printf("\ndigite o numero do seu candidato: ");
        scanf("%d",&g);
        if(g == 0){
            break;
        }
        for(int j=1;j<=N;j++){
            if(g == j){
                X[j-1]++;
            }
        }
    }
    n=X[0];
    c=0;
    for(int i=1;i<N;i++){
        if(X[i]>n){
            n=X[i];
            c=i;
        }
    }
    printf("o candidato %d venceu a eleicao com %d votos",c+1,n);
    return 0;
}