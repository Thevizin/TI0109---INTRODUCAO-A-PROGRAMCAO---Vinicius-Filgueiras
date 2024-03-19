#include <stdio.h>

int soma (int n){
    int soman;
    for(int i=1; i<=n; i++){
        soman += i;
    }
    
    return(soman);
}

int main () {
    int nm, result;
    char R=0;
    printf("digite a quantidade de numeros requerida: ");
    scanf("%d",&nm);
    printf("calculando...\n");
    result = soma(nm);

    printf("%d\n",result);

    printf("se deseja continuar, digite Y, senao, digite N:\n");
    scanf("%c",&R);

    if(R == 'Y'){
        return 1;
    }
    return 0;
}