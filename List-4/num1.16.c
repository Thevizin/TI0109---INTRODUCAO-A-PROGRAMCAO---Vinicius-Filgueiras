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
    char G[100],E,F,g;
    int A[100],a=0,N;
    printf("digite o numero de alunos na turma: ");
    scanf("%d",&N);
    for(int i=0;i<30;i++){
        printf("\ngabarito questao %d: ",i+1);
        scanf(" %c",&g);
        G[i]=g;
    }
    printf("\n\n\nALUNOS ACERTOS OU ERROS: \n\n\n");
    for(int i=0;i<N;i++){
        printf("\naluno %d: \n",i+1);
        for(int j=0;j<30;j++){
            printf("\nquestao %d: ",j+1);
            scanf(" %c",&F);
            if(F == G[j]){
                a++;
            }
        }
        A[i]=a;
        a=0;
    }
    for(int i=0;i<N;i++){
        printf("Aluno %d: %d acertos",i+1,A[i]);
    }

    return 0;
}