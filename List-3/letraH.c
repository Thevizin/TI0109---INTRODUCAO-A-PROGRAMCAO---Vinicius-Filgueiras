#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/* 
Algoritmo
 declare I como inteiro
 escreva "digite sua idade"
 leia I
 se I < 5 então
  escreva("Error")
senao se I >= 5 e I <= 7 entao
  escreva("Você é da categoria infantil")
senao se I >= 8 e I <= 10 entao
  escreva("Você é da categoria infanto-juvenil")
senao se I >= 11 e I <= 15 entao
  escreva("Você é da categoria juvenil")
senao se I >= 16 e I <= 30 entao
  escreva("Você é da categoria adulto")
senao
  escreva("Você é da categoria Master")
fim_condicional

fim_algoritmo
*/

int main(){
    int I;
    double P;
    printf("digite sua idade: ");
    scanf("%d",&I);
    printf("digite seu peso: ");
    scanf("%lf",&P);
    if(I < 20){
        if(P <= 60){
            printf("voce eh da categoria 9");
        }
        else if(P > 60 && P<= 90){
            printf("voce eh da categoria 8");
        }
        else{
            printf("voce eh da categoria 7");
        }
    }
    else if(I >= 20 && I <= 50){
        if(P <= 60){
            printf("voce eh da categoria 6");
        }
        else if(P > 60 && P<= 90){
            printf("voce eh da categoria 5");
        }
        else{
            printf("voce eh da categoria 4");
        }
    }
    else{
        if(P <= 60){
            printf("voce eh da categoria 3");
        }
        else if(P > 60 && P<= 90){
            printf("voce eh da categoria 2");
        }
        else{
            printf("voce eh da categoria 1");
        }
    }
    
}

