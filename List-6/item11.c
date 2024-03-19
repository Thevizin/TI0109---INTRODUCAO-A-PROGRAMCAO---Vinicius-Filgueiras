#include <stdio.h>

void soma (int num[],int t){
    int soman = 0;
    for(int i=0;i<t;i++){
        soman += num[i];
    }
    printf("%d",soman);
}

int main () {
    int n;
    printf("digite quantos numeros você deseja somar: ");
    scanf("%d",&n);
    int num[n];
    for(int i=0; i<n; i++){
        printf("numero %d: ",i+1);
        scanf("%d",&num[i]);
    }
    soma(num,n);
}