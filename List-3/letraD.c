#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/* 
algoritmo
    declare P, NV como numeros reais
    escreva("Digite o valor do produto: ")
    leia(P)
    
    se P <= 50.00 entao
       NV recebe P * 1.05
       escreva("O seu produto tera o valor de ", NV, " e sua classe sera D")
    senao
        se P > 50.00 e P <= 100.00 entao
            NV recebe P * 1.10
            se NV <= 80.00 entao
                escreva("O seu produto tera o valor de ", NV, " e sua classe sera D")
            senao
                se NV > 80.00 e NV <= 120.00 entao
                    escreva("O seu produto tera o valor de ", NV:2:2, " e sua classe sera C")
                fim_condicional
            fim_condicional
        senao
            NV recebe P * 1.15
            se NV <= 120.00 entao
                escreva("O seu produto tera o valor de ", NV, " e sua classe sera C")
            senao
                se NV <= 200.00 e NV > 120.00 entao
                    escreva("O seu produto tera o valor de ", NV:2:2, " e sua classe sera B")
                senao
                    escreva("O seu produto tera o valor de ", NV:2:2, " e sua classe sera A")
                fim_condicional
            fim_condicional
        fim_condicional
    fim_condicional
fim_algoritmo

*/
int main(){
double P, NV;
printf("digite o valor do produto: ");
scanf("%lf",&P);
if(P <= 50.00){
   NV = P*1.05;
   printf("O seu produto tera o valor de %.2lf e sua classe sera D",NV);
}
else if(P > 50.00 && P <= 100.00){
    NV = P*1.10;
    if(NV <= 80.00){
        printf("O seu produto tera o valor de %.2lf e sua classe sera D",NV);
    }
    else if(NV > 80.00 && NV <= 120.00){
        printf("O seu produto tera o valor de %.2lf e sua classe sera C",NV);
    }
}
else{
    NV = P*1.15;
    if(NV <= 120.00){
        printf("O seu produto tera o valor de %.2lf e sua classe sera C",NV);
    }
    else if(NV <= 200.00 && NV > 120.00){
        printf("O seu produto tera o valor de %.2lf e sua classe sera B",NV);
    }
    else{
        printf("O seu produto tera o valor de %.2lf e sua classe sera A",NV);
    }
    
}
}
