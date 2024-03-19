#include <stdio.h>
#include <string.h>
#include <ctype.h>

void subcadeias (char cadeia[], int N){
    int tam = strlen(cadeia);
    int comp = tam - (N-1);

    printf("subcadeias: \n");
    
    for(int i=0;i<comp;i++){
        for(int j=i;j<i+N;j++){
            printf("%c",cadeia[j]);
        }
        printf("\n");
    }
}

int main () {
    int N;
    char cadeia[100];

    printf("digite a cadeia de caracteres: ");
    fgets(cadeia, sizeof(cadeia), stdin);
    cadeia[strcspn(cadeia,"\n")] = '\0';

    printf("digite o tamanho das subcadeias: ");
    scanf("%d",&N);

    subcadeias(cadeia,N);
}