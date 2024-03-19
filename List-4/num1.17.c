#include <stdio.h>
#include <math.h>

/* Codigo em portugol
algoritmo

    var
        G: vetor[1..100] de caractere
        E, F, g: caractere
        A: vetor[1..100] de inteiro
        a, N, i, j: inteiro

    inicio
        escreva("Digite o número de alunos na turma: ")
        leia(N)

        para i de 1 ate 30 faca
            escreva("Gabarito questão ", i, ": ")
            leia(g)
            G[i] <- g
        fimpara

        escreva("\n\n\nALUNOS ACERTOS OU ERROS: \n\n\n")
        
        para i de 1 ate N faca
            a <- 0
            escreva("Aluno ", i, ": \n")
            
            para j de 1 ate 30 faca
                escreva("Questão ", j, ": ")
                leia(F)
                
                se F = G[j] entao
                    a <- a + 1
                fimse
            fimpara
            
            A[i] <- a
        fimpara
        
        para i de 1 ate N faca
            escreva("Aluno ", i, ": ", A[i], " acertos\n")
        fimpara

    fim

fim_algoritmo
  */


int main() {
    int X[100],Y[100],g,a=0,N,M=0;
    printf("digite o tamanho: ");
    scanf("%d",&N);
    printf("Digite os valores de X:");
    for(int i=0;i<N;i++){
        printf("\nnumero %d: ",i+1);
        scanf("%d",&g);
        X[i]=g;
    }
    printf("Digite os valores de X:");
    for(int i=0;i<N;i++){
        printf("\nnumero %d: ",i+1);
        scanf("%d",&g);
        Y[i]=g;
    }
    for(int i=0;i<N;i++){
      M += X[i] * Y[i];
    }
    printf("o produto escalar de X e Y: %d",M);
    return 0;
}