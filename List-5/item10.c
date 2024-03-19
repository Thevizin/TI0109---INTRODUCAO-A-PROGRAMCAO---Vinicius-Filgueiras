#include <math.h>
#include <stdio.h>


int main() {
    int T, Dp=0, Ds=0, Det, Lim, J;
    printf("informe o tamanho da matriz: ");
    scanf("%d",&T);
    J=2*T-1;
    int M[T][T], M2[T][J];
    Lim= T-1;
    printf("digite os elementos da matriz:\n");
    for(int i=0; i<T; i++){
        for(int j=0; j<T; j++){
            printf("linha %d coluna %d: ",i+1,j+1);
            scanf("%d",&M[i][j]);
        }
    }
    for(int i=0; i<T; i++){
        for(int j=0; j<T; j++){
            M2[i][j]= M[i][j];
        }
        for(int j=0; j<Lim; j++){
            M2[i][T+j]= M[i][j];
           
        }
    }
    for(int i=0; i<T; i++){
        for(int j=0; j<J; j++){
            printf("%d ",M2[i][j]);
        }
        printf("\n");
    }
//encontrando as diagonais principais:
    int P=1;
   for(int j=0;j<T;j++){
    for(int i=0;i<T;i++){
        P=P*M2[i][j+i];
    }
    Dp=Dp+P;
    P=1;
   }
   printf("\n%d",Dp);
//encontrando as diagonais secundárias:
    int Ps=1;
    for(int j=J-1;j>T-2;j--){
        for(int i=0;i<T;i++){
            Ps=Ps*M2[i][j-i];
        }
        Ds+=Ps;
        Ps=1;
    }
printf("\n%d",Ds);
//Determinante:

    Det= Dp-Ds;
    printf("\n%d",Det);


}


/*
int main(){
    int M[3][3], M2[3][5], A, B, C, D, DP, DS;
    printf("digite os valores da matriz: \n");
    for (int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            printf("linha %d coluna %d", i+1, j+1);
            scanf("%d",&M[i][j]);
            M2[i][j]=M[i][j];
        }
    }
    B=3;
    for(int i=0; i<3;){
        M2[i][B]=M[i][0];
        M2[i][B+1]=M[i][1];
    }
    for(int j=0; j<3; j++){}



}
*/