#include <stdio.h>
#include <string.h>

void imprimirAnoPorExtenso(int year) {
    char unidades[10][10] = {
        "um", "dois", "tres", "quatro", "cinco", "seis", "sete", "oito", "nove"
    };

    char especiais[10][20] = {
        "dez", "onze", "doze", "treze", "quatorze", "quinze", "dezesseis", "dezessete", "dezoito", "dezenove"
    };

    char dezenas[10][10] = {
        "", "", "vinte", "trinta", "quarenta", "cinquenta", "sessenta", "setenta", "oitenta", "noventa"
    };

    char centenas[10][20] = {
        "", "cento", "duzentos", "trezentos", "quatrocentos", "quinhentos", "seiscentos", "setecentos", "oitocentos", "novecentos"
    };

    char milhares[10][20] = {
        "", "mil", "dois mil", "três mil", "quatro mil", "cinco mil", "seis mil", "sete mil", "oito mil", "nove mil"
    };

    int milhar = year / 1000;
    int centena = (year % 1000) / 100;
    int dezena = (year % 100) / 10;
    int unidade = year % 10;

    printf("Ano por extenso: ");

    if (milhar > 0) {
        printf("%s ", milhares[milhar]);
    }

    if (centena > 0) {
        printf("%s ", centenas[centena]);
    }

    if (dezena > 1) {
        printf("e %s ", dezenas[dezena]);
    } else if (dezena == 1) {
        printf("e %s ", especiais[unidade]);
        return;
    }

    if (unidade > 0) {
        printf("e %s ", unidades[unidade - 1]);
    }
}

int main() {
    int year;

    printf("Digite um ano no formato dddd: ");
    scanf("%d", &year);

    imprimirAnoPorExtenso(year);

    return 0;
}
