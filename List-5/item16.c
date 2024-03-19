#include <math.h>
#include <stdio.h>

int main() {
    int M[3][3],M2[3][3];
    printf("forneça os valores da matriz: \n");
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            printf("linha %d coluna %d: ",i+1,j+1);
            scanf("%d",&M[i][j]);
        }
    }
    printf("matriz fornecida: \n");
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            printf("%d ",M[i][j]);
        }
        printf("\n");
    }
    printf("girando 90 graus\n------------------\n");
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            M2[j][2-i]=M[i][j];
        }
    }
    printf("nova matriz:\n");
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            printf("%d ",M2[i][j]);
        }
        printf("\n");
    }
}