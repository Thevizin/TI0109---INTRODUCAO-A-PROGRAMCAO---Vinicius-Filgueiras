#include <math.h>
#include <stdio.h>

int main() {
    int M[12][4],Me=0,S=0,A=0;
    printf("forneça os valores da matriz: \n");
    for(int i=0; i<12; i++){
        for(int j=0; j<4; j++){
            printf("mes %d semana %d: ",i+1,j+1);
            scanf("%d",&M[i][j]);
            A+=M[i][j];
        }
    }
    printf("\nGanho mensal: \n");
    for(int i=0; i<12; i++){
        for(int j=0; j<4; j++){
            Me+=M[i][j];
        }
        printf("mes %d: %d\n",i+1,Me);
        Me=0;
    }
    printf("\nGanho semanal: \n");
    for(int i=0; i<4; i++){
        for(int j=0; j<12; j++){
            S+=M[j][i];
        }
        printf("semana %d: %d\n",i+1,S);
        S=0;
    }
    printf("\nGanho Anual: \n%d",A);
}