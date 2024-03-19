#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>


void trocar (char Cadeia[]){
    for (int i=0; Cadeia[i] != '\0'; i++){
        if (islower(Cadeia[i])){
            Cadeia[i] = toupper(Cadeia[i]);
        }
        else if (isupper(Cadeia[i])){
            Cadeia[i] = tolower(Cadeia[i]);
        } 
    }
}

int main () {
    char Cadeia[100];

    printf("Digite um nome ai: ");
    fgets(Cadeia, sizeof(Cadeia), stdin);
    printf("%lld",strlen(Cadeia));
    trocar(Cadeia);

    printf("Cadeia com letras trocadas: %s",Cadeia);

    return 0;
}