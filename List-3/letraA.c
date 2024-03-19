#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/* 
algoritmo
declare A, B, OPC, OP1, OP2, OP3, OP4 inteiro

escreva("escreva dois numeros: ")
leia A
leia B

escreva "Escolha uma das opcoes: "
escreva "1 - media dos numeros listados"
escreva "2 - diferenca do maior pelo menor"
escreva "3 - produto dos numeros"
escreva "4 - divisao do primeiro pelo segundo\n"
leia OPC

OP1 recebe (A + B) / 2
OP2 recebe abs(A - B)
OP3 recebe A * B
OP4 recebe A / B

escolha OPC
    caso 1:
        escreva OP1
        pare
    caso 2:
        escreva OP2 
        pare
    caso 3:
        escreva OP3
        pare
    caso 4:
        escreva OP4 
        pare
    caso contrario:
        escreva "operacao invalida"
        pare
fim_escolha
fim_algoritmo
*/

int main(){
int A, B, OPC, OP1, OP2, OP3, OP4;
printf("escreva dois numeros: \n");
scanf("%d",&A);
scanf("%d",&B);
printf("Escolha uma das opcoes: \n1 - media dos numeros listados\n2 - diferenca do maior pelo menor\n3 - produto dos numeros\n4 - divisao do primeiro pelo segundo\n");
scanf("%d",&OPC);
OP1 = (A + B)/2;
OP2 = abs(A - B);
OP3 = A * B;
OP4 = A / B;
switch(OPC) {
    case 1:
    printf("%d",OP1);
    break;
    case 2:
    printf("%d",OP2);
    break;
    case 3:
    printf("%d",OP3);
    break;
    case 4:
    printf("%d",OP4);
    break;
    default:
    printf("operacao invalida");
}

return 0;

}