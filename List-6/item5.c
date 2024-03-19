#include<stdio.h>

int Mrec (int n1, int n2){
    if (n2 == 0){
        return 0;
    }
    else{
        return n1 + Mrec(n1,n2-1);
    }
}
int main(){
    printf("digite numeros: ");
    int num1, num2;
    scanf("%d %d",&num1,&num2);

    int result = Mrec(num1,num2);

    printf("%d", result);

    return 0;
}