#include <stdio.h>


int analise (char data1[],char data2[],float valor){
    int dia1, dia2, mes1, mes2, ano1, ano2;
    sscanf(data1, "%d/%d/%d", &dia1, &mes1, &ano1);
    sscanf(data2, "%d/%d/%d", &dia2, &mes2, &ano2);
    if(mes1 == mes2){
        if(dia1 > dia2){
            int numeroa = dia1 - dia2;
            printf("\n %d \n",numeroa);
            valor *= pow(1.0002, numeroa);
        }
    }
    return valor;
}

int main () {
    struct valores{
        int numero;
        int codigo;
        char dataven[10];
        char datapag[10];
        float valorr;
        float valornew;
    };
    struct valores Clientes[1];
    for(int i=0; i<1; i++){
        printf("Cliente %d\n",i+1);
        printf("     Digite o numero do documento: ");
        scanf("%d",&Clientes[i].numero);
        printf("     Digite o codigo: ");
        scanf("%d",&Clientes[i].codigo);
        printf("     Digite a data de vencimento: ");
        scanf(" %10s", &Clientes[i].dataven);
        printf("     Digite a data de pagamento: ");
        scanf(" %10s", &Clientes[i].datapag);
        printf("     Digite o valor original: ");
        scanf("%f",&Clientes[i].valorr);
        Clientes[i].valornew = analise(Clientes[i].datapag,Clientes[i].dataven,Clientes[i].valorr);       
    }
    printf("\n\n");

    for(int i=0; i<1; i++){
        printf("Cliente %d",i+1);
        printf("     Numero do documento: %d\n",Clientes[i].numero);
        
        printf("     Codigo: %d\n",Clientes[i].codigo);
        
        printf("     Valor a ser pago: %f\n\n\n",Clientes[i].valornew);
    }
       

}