#include <math.h>
#include <stdio.h>

int main() {
    int M[4][10],MCR[10], Na[10], ct=0;
    printf("forneça os valores da matriz: \n");
    for(int j=0; j<10; j++){
        printf("aluno %d\n",j+1);
        for(int i=0; i<4; i++){
                if(i==0){
                    printf("   Matricula: ");
                    scanf("%d",&M[i][j]);
                }
                if(i==1){
                    printf("   sexo: ");
                    scanf("%d",&M[i][j]);
                }
                if(i==2){
                    printf("   codigo do curso: ");
                    scanf("%d",&M[i][j]);
                }
                if(i==3){
                    printf("   CR: ");
                    scanf("%d",&M[i][j]);
                }
        }
    }
    MCR[0] = M[3][0];
    Na[0] = 1;
    for(int j=0; j<10; j++){
        if (M[3][j] > MCR[0]){
            MCR[0] = M[3][j];
            Na[0] = M[0][j];
        }
        if(M[3][j] == MCR[0]){
            ct++;
            Na[ct]= M[0][j];
        }
    }

    for(int i=0; i<10; i++){
        if(Na[i]!=0){
            printf("Aluna %d: %d\n",Na[i],MCR[0]);
        }
    }
}
