#include<stdio.h>

int conta (num, cont){
    int receba=0;
    for(int i=0; i<cont; i++){
        receba += num;
    }
    printf("%d",receba);
}
int main (){
    printf("digite um numero e o seu multiplicador: ");
    int num, cont;
    scanf("%d %d",&num,&cont);
    conta(num, cont);
}