#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/* 
Declare SA, SL como número real
Escreva "Forneca seu atual salario: "
Leia SA
SL recebe SA * 1.3
Se SA < 900.00 então
Escreva "O seu novo salario fica ", SL
Senão
Escreva "Você não tem direito a um aumento."

Fim_condicional

Fim_algoritmo
*/

int main(){
double SA, SL;
printf("forneca seu atual salario: ");
scanf("%lf", &SA);
SL = SA * 1.3;
if (SA < 900.00){
    printf("O seu novo salario fica %.2lf", SL);       
}
else{
    printf("voce nao tem direito a um aumento");
}
return 0;
}