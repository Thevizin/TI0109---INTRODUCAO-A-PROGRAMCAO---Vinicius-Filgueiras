#include <stdio.h>

void permutacao(char letras[], int tamanho, int posicao) {
    if (posicao == tamanho) {
        for (int i = 0; i < tamanho; i++) {
            printf("%c", letras[i]);
        }
        printf("\n");
    } else {
        for (int i = posicao; i < tamanho; i++) {
            // Troca as letras
            char temp = letras[posicao];
            letras[posicao] = letras[i];
            letras[i] = temp;

            // Faz a chamada recursiva para as posições seguintes
            permutacao(letras, tamanho, posicao + 1);

            // Desfaz a troca para a próxima iteração
            temp = letras[posicao];
            letras[posicao] = letras[i];
            letras[i] = temp;
        }
    }
}

int main() {
    int n;

    printf("Digite o valor de n: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Erro: n deve ser um número positivo.\n");
        return 1;
    }

    char letras[26]; // Array para armazenar as letras
    for (int i = 0; i < n; i++) {
        letras[i] = 'A' + i; // Atribui as primeiras n letras do alfabeto
    }

    permutacao(letras, n, 0);

    return 0;
}
