#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

void FormatoNome (char nomeCompleto[]){
    int i;
    char *primeironome;
    char *sobrenome;

    sobrenome = strrchr(nomeCompleto, ' ');

    if(sobrenome == NULL){
        printf("%s\n",nomeCompleto);
        return;
    }

    sobrenome++;
    primeironome = strchr(nomeCompleto, ' ');
    primeironome++;

    printf("%s, %s\n",sobrenome, primeironome);

}

int main() {
    char nomeCompleto[100];

    printf("Digite o nome completo: ");
    fgets(nomeCompleto, sizeof(nomeCompleto), stdin);
    
    if (nomeCompleto[strlen(nomeCompleto) - 1] == '\n') {
            nomeCompleto[strlen(nomeCompleto) - 1] = '\0';
        }
    FormatoNome(nomeCompleto);
}