#include<stdio.h>

int SIncremental (int n1, int n2){
    if (n2 == 0){
        return n1;
    }
    else{
        return SIncremental(n1 + 1, n2 - 1);
    }
}

int main() {
    int num1, num2;

    printf("digite dois numeros para calcular a soma incremental: ");
    scanf("%d %d",&num1,&num2);

    if(num1 < 0 || num2 < 0){
        printf("Error");
        return 1;
    }

    int result = SIncremental (num1, num2);

    printf("%d + %d = %d ",num1, num2, result);

    return 0;
}