#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/* 
Algoritmo
declare A, B, C, R1, R2, D, X, Y, F como numeros reais
escreva("Digite o valor de A: ")
leia(A)
escreva("Digite o valor de B: ")
leia(B)
escreva("Digite o valor de C: ")
leia(C)
D recebe B * B - 4 * A * C
se D < 0 então
    escreva("A equação não tem raízes reais")
senão se D = 0 então
    R1 recebe -B / (2 * A)
    escreva("A equação tem apenas uma raiz real: ", x1)
senão
    R1 recebe (-b + sqrt(D)) / (2 * A)
    R2 recebe (-b - sqrt(D)) / (2 * a)
    escreva("A equação tem duas raízes reais: ", x1, " e ", x2)
fim_condicional

fim_algoritmo
*/

int main(){
    double A, B, C, R1, R2, D, X, Y, F;

    for(int i = 0; i <= 1000; i++){
        F = 0;
        printf("Para uma equacao AX2 + BX + C = 0, digite os valores dos coeficientes A, B e C: \n");
        scanf("%lf",&A);
        scanf("%lf",&B);
        scanf("%lf",&C);
        X = pow(B, 2);
        Y = 4 * A * C;
        D = X - Y;

        if(C == 0){
            R1 = 0;
            R2 = -B/A;
            printf("As raizes de sua equacao sao: %.2lf e %.2lf\n", R1, R2);
        }
        else if(B == 0){
            R1 = sqrt(-C/A);
            R2 = -R1;
            printf("As raizes de sua equacao sao: %.2lf e %.2lf\n", R1, R2);
        }
        else if(A == 0){
            R1 = -C/B;
            printf("sua equacao eh de primeiro grau, por isso so tem uma raiz de valor %.2lf\n", R1);
        }
        else if(D == 0){
            R1 = -B/2 * A;
            printf("sua equacao so tem uma raiz de valor %.2lf, pois o delta eh nulo\n",R1);
        }
        else if(Y > X){
            printf("Equacao nao existe no sistema dos reais\n");
        }
        else{
            R1 = (-B - sqrt(D))/(2*A);
            R2 = (-B + sqrt(D))/(2*A);
            printf("as raizes de sua equacao sao %.2lf e %.2lf\n", R1, R2);
        }
        
        printf("digite 1 para continuar e 0 para parar\n");
        scanf("%lf",&F);
        if(F == 0){
            break;
        }
    }

    return 0;
}

