#include <stdio.h>
#include <math.h>

/* Codigo em portugol
algoritmo "Calcular Seno"
var
   v: vetor[1..200] de real
   n1, n2, n3, G, D, val: real
   
inicio
   n1 <- 1
   n2 <- 1
   D <- 0
   val <- -1
   
   escreva("Digite um valor para calcular o seno: ")
   leia(n3)
   
   para i de 1 até 29 passo 2 faça
      n2 <- i * n2
      n1 <- pow(n3, i) / n2
      val <- val * (-1)
      G <- n1 * val
      
      se i = 1 então
         v[1] <- G
      senão
         v[i-1] <- G
      fimse
   fimpara
   
   para i de 1 até 15 faça
      D <- D + v[i]
   fimpara
   
   escreva("O seno de ", n3, " é ", D)
   
fimalgoritmo
  */

int main() {
    double v[200],n1=1,n2=1,n3,G,D=0,val=-1;
    printf("digite um valor para calcualr o seno: ");
    scanf("%lf",&n3);
    for (int i=1;i<=29;i+=2){
      n2=i*n2;
      n1=pow(n3,i)/n2;
      val=val*(-1);
      G=n1*val;
      if(i==1){
        v[0]=G;
      }
      else{
        v[i-2]=G;
      }
    }
    for(int i=0;i<15;i++){
      D=D+v[i];
    }
    printf("o sen de %.2lf eh %.2lf",n3,D);
  

    
    return 0;
}



