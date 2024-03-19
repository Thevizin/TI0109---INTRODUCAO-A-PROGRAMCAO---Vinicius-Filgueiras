#include <stdio.h>
#include <math.h>

/* Codigo em portugol
algoritmo "Temperaturas"

var
    v: vetor[1..200] de real
    t1, maior, menor, total, tm, d: real
    i: inteiro

inicio
    escreva("Registre as temperaturas:")
    total <- 0
    para i <- 1 até 121 faça
        escreva("Dia ", i, ": ")
        leia(t1)
        v[i] <- t1
        total <- total + t1
    fimpara

    tm <- total / 121
    menor <- v[1]
    para i <- 1 até 121 faça
        se v[i] > maior então
            maior <- v[i]
        fimse
        se v[i] < menor então
            menor <- v[i]
        fimse
        se v[i] < tm então
            d <- d + 1
        fimse
    fimpara

    escreva("A menor temperatura: ", menor)
    escreva("A maior temperatura: ", maior)
    escreva("A média das temperaturas: ", tm)
    escreva("Dias abaixo da média: ", d)
fim
  */

int main() {
    double v[200],t1,maior=0,menor,total=0,tm,d=0;
    printf("registre as temperaturas:\n");
    for(int i=0;i<121;i++){
      printf("dia %d: ",i+1);
      scanf("%lf",&t1);
      v[i]=t1;
      total=total+t1;
    }
    tm=total/121;
    menor=v[0];
    for(int i=0;i<121;i++){
      if(v[i]>maior){
         maior = v[i];
      }
      if(v[i]<menor){
         menor = v[i];
      }
      if(v[i]<tm){
         d++;
      }
    }
    printf(" a menor temperatura: %.2lf\n",menor);
    printf(" a maior temperatura: %.2lf\n",maior);
    printf(" a media das temperaturas: %.2lf\n",tm);
    printf(" dias abaixo da media: %.2lf\n",d);

  

    
    return 0;
}



