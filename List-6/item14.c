#include <stdio.h>

void hanoi(int n, char origem, char destino, char auxiliar, char extra) {
    if (n > 0) {
        hanoi(n - 1, origem, auxiliar, destino, extra);
        printf("Mova o disco %d do pino %c para o pino %c\n", n, origem, destino);
        hanoi(n - 1, auxiliar, destino, origem, extra);
        printf("Mova o disco %d do pino %c para o pino %c\n", n, destino, extra);
        hanoi(n - 1, origem, auxiliar, destino, extra);
        printf("Mova o disco %d do pino %c para o pino %c\n", n, extra, destino);
        hanoi(n - 1, auxiliar, destino, origem, extra);
    }
}

int main() {
    int numDiscos;

    printf("Digite o número de discos: ");
    scanf("%d", &numDiscos);

    printf("Solução para o problema das Torres de Hanói com %d discos:\n", numDiscos);

    hanoi(numDiscos, 'A', 'B', 'C', 'D');

    return 0;
}