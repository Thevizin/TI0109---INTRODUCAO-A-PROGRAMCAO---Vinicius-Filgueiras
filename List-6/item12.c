#include <stdio.h>

void soma (int num[],int t){
    int test = 0;
    for(int i=0;i<t;i++){
        if(num[i] > test){
            test = num[i];
        }
    }
    printf("%d",test);
}


int main () {
    int n;
    printf("digite quantos numeros você deseja analisar: ");
    scanf("%d",&n);
    int num[n];
    for(int i=0; i<n; i++){
        printf("numero %d: ",i+1);
        scanf("%d",&num[i]);
    }
    soma(num,n);
}