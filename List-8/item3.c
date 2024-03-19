#include <stdio.h>



struct Produto {
    int codigo;
    char descricao[100];
    float valor;
    int quantidade;
};

int main() {
    struct Produto produtos[10];
    
    // Leitura dos dados dos produtos
    printf("==== Cadastro de Produtos ====\n");
    for (int i = 0; i < 10; i++) {
        printf("\nProduto %d:\n", i + 1);
        
        // Leitura do código
        printf("Código: ");
        scanf("%d", &produtos[i].codigo);
        
        // Leitura da descrição
        printf("Descrição: ");
        scanf(" %[^\n]", produtos[i].descricao);
        
        // Leitura do valor
        printf("Valor: ");
        scanf("%f", &produtos[i].valor);
        
        // Leitura da quantidade em estoque
        printf("Quantidade em estoque: ");
        scanf("%d", &produtos[i].quantidade);
    }
    
    // Ordenação dos produtos pelo código (ordem crescente)
    for (int i = 0; i < 10 - 1; i++) {
        for (int j = i + 1; j < 10; j++) {
            if (produtos[i].codigo > produtos[j].codigo) {
                struct Produto temp = produtos[i];
                produtos[i] = produtos[j];
                produtos[j] = temp;
            }
        }
    }
    
    // Exibição dos produtos cadastrados
    printf("\n==== Produtos Cadastrados ====\n");
    for (int i = 0; i < 10; i++) {
        printf("\nProduto %d:\n", i + 1);
        printf("Código: %d\n", produtos[i].codigo);
        printf("Descrição: %s\n", produtos[i].descricao);
        printf("Valor: R$ %.2f\n", produtos[i].valor);
        printf("Quantidade em estoque: %d\n", produtos[i].quantidade);
    }
    
    return 0;
}
