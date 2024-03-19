#include <stdio.h>

void inverter (int num[],int t){
    int inicio = 0, fim = t-1;
    while (inicio < fim){
        int temp = num[inicio];
        num[inicio] = num[fim];
        num[fim] = temp;

        inicio++;
        fim--;
    }
    printf("\n\n======= Depois ========\n\n");
    for(int i=0; i<t; i++){
        printf("%d ",num[i]);
    }
    
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
    printf("\n\n====== Antes ========\n\n");
    for(int i=0; i<n; i++){
        printf("%d ",num[i]);
    }
    inverter(num,n);
}