#include <math.h>
#include <stdio.h>

/* PORTUGOL
Algoritmo
declare M[3,3], Ma[3,3], D[3,5], Mcof[3,5], Mm[2,2], Mi[3,3], Dp, Ds, C, Fat, Det numéricos
escreva "forneça os valores da matriz: "
para i <- 1 até 3 faça
    início
    para j <- 1 até 3 faça
        início
        escreva "linha " i "coluna " j ": "
        leia M[i,j]
        D[i,j] <- M[i,j]
        fim_para
    fim_para
para i <- 1 até 3 faça
    início
    para j <- 1 até 2 faça
        início
        D[i,j+3] <- M[i,j]
        fim_para
    fim_para
Dp <- 0
C <- 1
para j <- 1 até 3 faça
    início
    k <- j
    para i <- 1 até 3 faça
        início
        C <- C * D[i,k]
        k <- k + 1
        fim_para
    Dp = Dp + C
    fim_para
escreva "diagonal principal = " Dp
Ds <- 0
C <- 1
para j <- 5 até 2 faça
    início
    k <- j



*/



int main() {
    int M[3][3], Ma[3][3],D[3][5], Mcof[3][3], Mm[2][2];
    int Dp, Ds, C, Fat, Det;
    float Mi[3][3];
    printf("forneça os valores da matriz: \n");
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            printf("linha %d coluna %d: ",i+1,j+1);
            scanf("%d",&M[i][j]);
            D[i][j]=M[i][j];
        }
    }
    for(int i=0; i<3; i++){
        for(int j=0;j<2;j++){
            D[i][j+3]=M[i][j];
        }
    }
    //calculando a diagonal principal
    Dp=0;
    C=1;
    for(int j=0;j<3;j++){
        int k=j;
        for(int i=0; i<3; i++){
            C*=D[i][k];
            k++;
        }
        Dp+=C;
    }
    printf("Diagonal principal = %d\n",Dp);
    //calculando a diagonal secundária

    Ds=0;
    C=1;
    for(int j=4;j>1;j--){
        int k=j;
        for(int i=0; i<3;i++){
            C*=D[i][k];
            k--;
        }
        Ds+=C;
    }
    printf("Diagonal secundaria = %d\n",Ds);
    Det=Dp-Ds;
    printf("Determinante = %d\n",Det);
    Fat=1;
    if(Det != 0){
        printf("existe matriz inversa!\n\n\n\nCalculando matriz dos cofatores...\n");
        for(int i=0;i<3;i++){ //cada elemento da matriz normal
            for(int j=0;j<3;j++){
                for(int i2=0;i2<3;i2++){ //Usando o menor principal
                    for(int j2=0;j2<3;j2++){
                        if(i2 != i && j2 != j){
                            int k, l;
                            if(i2 < i){
                                k = i2;
                            }
                            else{
                                k = i2 - 1;
                            }
                            if(j2 < j){
                                l = j2;
                            }
                            else{
                                l = j2 - 1;
                            }
                            Mm[k][l]=M[i2][j2];
                        }
                    }
                }
                Mcof[i][j]=Fat*((Mm[0][0]*Mm[1][1])-(Mm[0][1]*Mm[1][0]));
                Fat=Fat*(-1);
            }
        }

        for(int i=0;i<3;i++){ 
            for(int j=0;j<3;j++){
                Ma[j][i]=Mcof[i][j];
            }
        }
        printf("Matriz adjunta: \n");
        for(int i=0;i<3;i++){ 
            for(int j=0;j<3;j++){
                printf("%d ",Ma[i][j]);
            }
            printf("\n");
        }
        for(int i=0;i<3;i++){ 
            for(int j=0;j<3;j++){
                Mi[i][j]=(float)Ma[i][j]/Det;
            }
        }
        printf("\n\n");

        printf("Matriz inversa: \n");
        for(int i=0;i<3;i++){ 
            for(int j=0;j<3;j++){
                printf("%.3f ",Mi[i][j]);
            }
            printf("\n");
        }


    }

}