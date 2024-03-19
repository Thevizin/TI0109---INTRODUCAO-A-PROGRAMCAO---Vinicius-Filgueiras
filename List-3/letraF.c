#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/* 
Algoritmo PesoIdeal

        declare H, PI como reais
        declare S como caractere

    escreva("digite o valor de sua altura: ")
    leia H

    escreva("entre feminino e masculino, qual seu sexo? ")
    escreva("Digite M para masculino e F para feminino\n")
    leia S

    se (S = 'M') entao
        PI recebe (72.0 * H) - 58.0
        escreva("para o sexo masculino seu peso ideal eh de ", PI)
    senao
        PI recebe (62.1 * H) - 44.7
        escreva("para o sexo feminino seu peso ideal eh de ", PI)
    fim_condicional

fim_algoritmo
*/

int main(){
    double H, PI;
    char S;
    
    printf("digite o valor de sua altura: ");
    scanf("%lf", &H);
    
    printf("entre feminino e masculino, qual seu sexo?\nDigite M para masculino e F para feminino\n");
    scanf(" %c", &S);
    
    if(S == 'M'){ 
        PI = (72.*H)-58;
        printf("para o sexo masculino seu peso ideal eh de %.2lf",PI);
    }
    else{
        PI = (62.1*H) - 44.7;
        printf("para o sexo feminino seu peso ideal eh de %.2lf",PI);
        }
    }

