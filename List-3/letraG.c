#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/* 
Algoritmo PesoIdeal

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
    printf("digite sua idade: ");
    scanf("%d",&I);
    if(I < 5){
        printf("error");
    }
    else if(I >= 5 && I<= 7){
    printf("voce eh da categoria infantil");
    }
    else if(I >= 8 && I<= 10){
    printf("voce eh da categoria infanto-juvenil");
    }
    else if(I >= 11 && I<= 15){
    printf("voce eh da categoria juvenil");
    }
    else if(I >= 16 && I<= 30){
    printf("voce eh da categoria adulto");
    }
    else{
        printf("voce eh da categoria Master");
    }
}

