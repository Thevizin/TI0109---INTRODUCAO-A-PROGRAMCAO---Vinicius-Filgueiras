#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

void palindromo (char palindo[]){
    int j=strlen(palindo)-2;
    for(int i=0; i<=j; i++){
        if(tolower(palindo[i]) != tolower(palindo[j])){
            printf("nao eh palindromo");
            return 0; 
        }
        j--;
    }
    printf("eh palindromo");
}

int main () {
    char palindo[100];
    printf("digite uma palavra: ");
    fgets(palindo, sizeof(palindo),stdin);

    palindromo(palindo);
    return 0;
}