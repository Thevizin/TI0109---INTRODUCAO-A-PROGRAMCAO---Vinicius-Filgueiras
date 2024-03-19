#include <stdio.h>
#include <math.h>

int main (){
    struct dados{
        int OS;
        char data[11];
        float valor;
        char descricao[100];
        char nome[100];
    };
    struct dados servicos[5];
    int numerop=0;
    float maiorv = 0,media=0;
    printf("====== Oficina Paz Eterna ========\n   Onde sua desgraca eh nossa terra\n\n");
    for(int i=0;i<5;i++){
        printf(" Cliente %d:\n",i+1);
        printf("     Numero da OS: ");
        scanf("%d",&servicos[i].OS);
        getchar();
        printf("     Data:");
        fgets(servicos[i].data,sizeof(servicos[i].data),stdin);
        fflush(stdin);
        printf("     Valor do servico: ");
        scanf("%f",&servicos[i].valor);
            media += servicos[i].valor;
            if(servicos[i].valor > maiorv){
                maiorv = servicos[i].valor;
                numerop = i;
            }
        getchar();
        printf("     Descricao: ");
        fgets(servicos[i].descricao,sizeof(servicos[i].descricao),stdin);
        fflush(stdin);
        printf("     Nome do cliente: ");
        fgets(servicos[i].nome,sizeof(servicos[i].nome),stdin);
        fflush(stdin);
    }
    printf("===== Carregando... ======\n\n");
    media /= 5;
    printf("Media do valor: R$ %.2f\n\n",media);
    printf("O cliente que fez o pedido mais caro foi: %s\n",servicos[numerop].nome);
    printf("   Descricao: %s\n", servicos[numerop].descricao);
    printf("   Valor pago: R$ %.2f\n",servicos[numerop].valor);
    printf("   Data: %s\n",servicos[numerop].data);
    printf("   Numero da OS: %d",servicos[numerop].OS);

}