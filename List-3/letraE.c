#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/* 
algoritmo
        declare V, NV: como numeros reais
        declare T como caractere
        
    escreva("Digite o valor de sua aplicação: ")
    leia(V)
    
    escreva("Você deseja poupança ou fundo de renda fixa?")
    escreval("Para Poupança, digite A")
    escreval("Para fundo de renda fixa, digite B")
    
    leia(T)
       
    se T = 'A' entao
        escreva("Você escolheu o modo de poupança:")
        para i de 1 ate 12 faca
            NV recebe V * (1.1 ^ i)
            escreva("No mês ", i, " seu montante será de R$ ", NV)
        fim_sequencia
    senao se T = 'B' entao
        escreval("Você escolheu o modo de fundo de renda fixa:")
        para i de 1 ate 12 faca
            NV recebe V * (1.15 ^ i)
            escreval("No mês ", i, " seu montante será de R$ ", NV:2:2)
        fim_sequencia
    senao
        escreva("Opção inválida!")
    fim_condicional
fim_algoritmo
*/

int main(){
    double V, NV;
    char T;
    
    printf("digite o valor de sua aplicacao: ");
    scanf("%lf", &V);
    
    printf("voce deseja poupanca ou fundo de renda fixa?\nPara Poupanca, digite A\nPara fundo de renda fixa, digite B\n");
    
    scanf(" %c", &T);
    
    if(T == 'A'){ 
        printf("voce escolheu o modo de poupanca: \n");
        for(int i = 1; i <= 12; i++){ 
            NV = V * pow(1.1, i); 
            printf("no mes %d seu montante sera de %.2lf\n", i, NV);
        }
    }
    else if(T == 'B'){ 
        printf("voce escolheu o modo de fundo de renda fixa: \n");
        for(int i = 1; i <= 12; i++){ 
            NV = V * pow(1.15, i); 
            printf("no mes %d seu montante sera de %.2lf\n", i, NV);
        }
    }
    else{ 
        printf("Opcao invalida!\n");
    }
    return 0;
}

