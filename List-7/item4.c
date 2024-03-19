#include <stdio.h>
#include <string.h>
#include <ctype.h>

void Anagram (char str1[], char str2[]){
    int len1 = strlen(str1);
    int len2 = strlen(str2);

    if(len1 != len2){
        printf("\nnao sao anagramas");
        return 0;
    }

    for(int i= 0; i< len1; i++){
        str1[i] = tolower(str1[i]);
        str2[i] = tolower(str2[i]);
    }

    for(int i=0; i< len1 - 1; i++){
        for(int j= i+1; j<len1; j++){
            if(str1[i]>str1[j]){
                char temp = str1[i];
                str1[i] = str1[j];
                str1[j] = temp;
            }
            if(str2[i]>str2[j]){
                char temp = str2[i];
                str2[i] = str2[j];
                str2[j] = temp;
            }
        }
    }

    if(strcmp(str1, str2) == 0){
        printf ("sao anagramas");
    }
    else{
        printf("nao sao anagramas");
    }
}


int main () {
    char str1[100];
    char str2[100];

    printf("digite um nome: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0';

    printf("digite um nome: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0';

    Anagram(str1,str2);



}