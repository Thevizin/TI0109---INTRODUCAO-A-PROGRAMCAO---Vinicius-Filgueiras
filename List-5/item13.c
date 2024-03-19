#include <math.h>
#include <stdio.h>

int main() {
    int T;
    printf("digite o tamanho da matriz: ");
    scanf("%d",&T);
    int M[T][T], M2[T][T],S;
    printf("forneça os valores da matriz: \n");
    for(int i=0; i<T; i++){
        for(int j=0; j<T; j++){
            printf("linha %d coluna %d: ",i+1,j+1);
            scanf("%d",&M[i][j]);
        }
    }
    for(int i=0; i<T; i++){
        for(int j=0; j<T; j++){
            M2[j][i]=M[i][j];
        }
    }
    for(int i=0; i<T; i++){
        for(int j=0; j<T; j++){
            printf("%d ",M2[i][j]);
        }
        printf("\n");
    }
    for(int i=0; i<T; i++){
        for(int j=0; j<T; j++){
            if(M[i][j]!=M2[i][j]){
                S=0;
            } 
        }
    }
    if(S==0){
        printf("Nao eh simetrica");
    }
    else{
        printf("Eh simetrica");
    }



}
