#include <stdio.h>
#include <math.h>

/*
   algaritmo em portugol
algaritmo
declare VR, VD, VM, VL
escreva "informe o valor em reais que voce possui: "
leia VR
VD recebe VR/3.95
VM recebe VR/4.25
VL recebe VR/5.8
escreva("voce possui o equivalente a" VD "dolares," VM "Marcos e" VL "Libras")

fim_algoritmo
*/

int main() {
    float VR, VD, VM, VL;
    printf("informe o valor em reais que voce possui: ");
    scanf("%f",&VR);
    VD=VR/3.95;
    VM=VR/4.25;
    VL=VR/5.8;
    printf("voce possui o equivalente a %.2f dolares, %.2f Marcos e %.2f Libras",VD,VM,VL);
    return 0;

}
        

    