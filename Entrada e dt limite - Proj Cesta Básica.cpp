#include <stdio.h>
#include <time.h>

int main() {
    int dia, mes, ano;
    
    //Entrada data recebimento da cesta.
    printf("Digite a data de recebimento (dia mes ano, tecle dia e aperte enter...): ");
    scanf("%d %d %d", &dia, &mes, &ano);

    // Configura a estrutura tm com a data fornecida
    struct tm data_inicial = {0};
    data_inicial.tm_mday = dia;
    data_inicial.tm_mon = mes - 1;  //meses começam em 0 (ex: janeiro = 0)
    data_inicial.tm_year = ano - 1900;  //anos desde 1900.

    // Adiciona 3 meses
    data_inicial.tm_mon += 3;

    // Ajusta o tempo caso a data seja inválida (como fevereiro 30)
    mktime(&data_inicial);

    printf("A data após 3 meses: %02d/%02d/%d\n", data_inicial.tm_mday, data_inicial.tm_mon + 1, data_inicial.tm_year + 1900);

    return 0;
}

