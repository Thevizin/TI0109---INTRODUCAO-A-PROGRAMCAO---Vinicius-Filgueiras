#include <stdio.h>
#include <math.h>




int receptor () {

}

int main () {
    struct dados {
        float salario;
        int nfilho;
        char sexo;
        int idade;
    };
    float maiors=0, somas=0, mulmaior=0;
    int somafilho=0;
    printf("======== PREFEITURA DE FORTALEZA =============\n       pesquisa da populaçao\n\n");
    struct dados habitante[20];
    for(int i=0; i<20; i++){
        printf("Pessoa %d:\n",i+1);
        printf("   Salario: ");
        scanf("%f",&habitante[i].salario);
            if(habitante[i].salario > maiors){
                maiors = habitante[i].salario;
            }
            somas += habitante[i].salario;
        printf("   Numero de filhos: ");
        scanf("%d",&habitante[i].nfilho);
            somafilho += habitante[i].nfilho;
        printf("   Sexo(m/h): ");
        scanf(" %c",&habitante[i].sexo);
            if(habitante[i].sexo == 'm' && habitante[i].salario >= 10000.00){
                mulmaior++;
            }
        printf("   idade: ");
        scanf("%d",&habitante[i].idade);
    }
    printf("====== Carregando... ========\n\n");
    float percentualmulher = mulmaior*100/20, mediasalario = somas/20;
    int mediafilho = somafilho/20;

    printf("O percentual de mulheres com salario acima de 10000 eh: %.2f\n",percentualmulher);
    printf("Ja, a media salarial foi de %.2f\n",mediasalario);
    printf("O maior salario foi de %.2f\n",maiors);
    printf("Ja, a media de filhos foi de %d",mediafilho);






}