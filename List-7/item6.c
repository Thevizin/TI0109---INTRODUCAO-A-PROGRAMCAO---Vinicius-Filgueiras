#include <stdio.h>
#include <string.h>
#include <ctype.h>

void prefix (char Word[]){
    int len = strlen(Word);

    for(int i=0;i<len;i++){
        for(int j=0;j<=i;j++){
            printf("%c",Word[j]);
        }
        printf("\n");
    }
}
int main (){
    char Word[100], N;

    printf("digite uma palavra: ");
    fgets(Word, sizeof(Word), stdin);
    Word[strcspn(Word, "\n")] = '\0';

    prefix(Word);
}