#include <stdio.h>

void Fibonacci (int n){
    int termoatual = 1;
    int termoA1= 0;
    int termoA2 = 1;

    printf("o termo %d da serie de Fibonacci\n\n---------------------------------\n",n);

    for(int i=1; i<n; i++){
        termoatual = termoA1 + termoA2;
        termoA1= termoA2;
        termoA2= termoatual; 
    }
    printf("%d ",termoatual);
}

int main () {
    int n;

    printf("digite o tamanho da serie: ");
    scanf("%d",&n);

    if(n < 0){
        printf("Error!");
        return 1;
    }
    
    Fibonacci(n);

    return 0;
}