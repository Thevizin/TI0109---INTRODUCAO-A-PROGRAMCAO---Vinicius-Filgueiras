#include<stdio.h>

int MIncremental (int n1, int n2){
    if (n1 == 0 || n2 == 0){
        return 0;
    }
    else{
        return n1 + MIncremental(n1,n2-1);
    }
}
int main (){
    int num1, num2;
    printf("digite dois numeros: ");
    scanf("%d %d",&num1,&num2);

    if (num1 < 0 || num2 < 0){
        printf("Error");
        return 1;
    }

    int result = MIncremental (num1,num2);
    printf("%d * %d = %d",num1,num2,result);
    return 0;
}