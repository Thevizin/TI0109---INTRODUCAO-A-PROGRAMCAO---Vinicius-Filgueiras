#include <stdio.h>
#include <string.h>
#include <ctype.h>

int remover (char Word[],char N){
    int len = strlen(Word);
    int escrita = 0;
    int leitura = 0;

    while(leitura < len){
        if(Word[leitura] != N){
            Word[escrita] = Word[leitura];
            escrita++;
        }
        leitura++;
    }
    Word[escrita] = '\0';
}


int main (){
    char Word[100], N;

    printf("digite uma palavra: ");
    fgets(Word, sizeof(Word), stdin);
    Word[strcspn(Word, "\n")] = '\0';

    printf("digite um caractere a ser excluído");
    scanf("%c",&N);

    remover(Word,N);

    printf("Nova cadeia: %s\n",Word);
}