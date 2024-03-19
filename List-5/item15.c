#include <math.h>
#include <stdio.h>

int main() {
    int M[3][3],l=0,c=0,dp=0,ds=0;
    printf("forneça os valores da matriz: \n");
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            printf("linha %d coluna %d: ",i+1,j+1);
            scanf("%d",&M[i][j]);
        }
    }
    // Linhas

    for(int j=0; j<3; j++){
    l = l + M[0][j];
    }
    for(int i=0; i<3; i++){
        int G=0;
        for(int j=0; j<3; j++){
            G=G+M[i][j];
        }
        if(l!=G){
            printf("\nNao eh um quadrado magico!");
            return 0;
        }
    }

    // Colunas

    for(int i=0; i<3; i++){
    c = c + M[i][0];
    }
    for(int j=0; j<3; j++){
        int G=0;
        for(int i=0; i<3; i++){
            G=G+M[i][j];
        }
        if(c!=G){
            printf("\nNao eh um quadrado magico!");
            return 0;
        }
    }

    // Diagonais

    for(int i=0; i<3; i++){
    dp = dp + M[i][i];
    }
    for(int i=0; i<3; i++){
    int j = 2-i;
    ds = ds + M[i][j];
    }
    if(dp != ds){
        printf("\nNao eh um quadrado magico!");
        return 0;
    }
    else{
        if(l == c && c == dp){
            printf("sao um quadrado magico");
        }
        else{
            printf("nao sao um quadrado magico");
        }
    }

    
}