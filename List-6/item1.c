#include<stdio.h>

void contagem (int num){
    int binario[32];
    int ind = 0;

    while (num > 0){
        binario[ind] = num % 2;
        num /= 2;
        ind ++;
    }

    printf("o numero em binario eh: ");

    if (ind == 0){
        printf("0");
    }
    else {
        for(int i = ind - 1; i >= 0; i--){
            printf("%d",binario[i]);
        }
    }

}
int main() {
    int num;

    printf("digite um numero: ");
    scanf("%d",&num);

    if (num < 0){
        printf("error");
        return 1;
    }
    contagem(num);

    return 0;
}