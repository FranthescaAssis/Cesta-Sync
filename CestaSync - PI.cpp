#include <stdio.h>
#include <string.h>
#include<locale.h>

// Definição de uma estrutura para as cestas básicas
typedef struct {
    int id;
    char tipo[20];
    char conteudo[200];  // Aumentando o tamanho para comportar mais itens
} CestaBasica;

// Função para ordenar as cestas por ID usando Bubble Sort
void ordenaCestas(CestaBasica cestas[], int n) {
    int i, j;
    CestaBasica temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (cestas[j].id > cestas[j + 1].id) {
                temp = cestas[j];
                cestas[j] = cestas[j + 1];
                cestas[j + 1] = temp;
            }
        }
    }
}

// Função para buscar uma cesta pelo ID
void buscaCesta(CestaBasica cestas[], int n, int id) {
    int i;
    int found = 0;
    for (i = 0; i < n; i++) {
        if (cestas[i].id == id) {
            printf("Cesta Encontrada:\nID: %d\nTipo: %s\nConteúdo: %s\n", cestas[i].id, cestas[i].tipo, cestas[i].conteudo);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("Cesta Não Encontrada.\n");
    }
}

int main() {
	setlocale(LC_ALL, "Portuguese");
    // Dados das cestas com mais itens
    CestaBasica cestas[3] = {
        {3, "Família Grande", "Arroz, Feijão, Óleo, Farinha de trigo, Macarrão, Açúcar"},
        {1, "Família Pequena", "Arroz, Macarrão, Molho de tomate, Feijão, Óleo"},
        {2, "Sem Glúten", "Arroz, Batata, Mandioca, Milho, Farinha de arroz"}
    };

    int n = 3;
    int idParaBuscar = 2;

    // Ordenando as cestas por ID
    ordenaCestas(cestas, n);
    printf("Cestas Básicas Ordenadas:\n");
    for (int i = 0; i < n; i++) {
        printf("ID: %d, Tipo: %s, Conteúdo: %s\n", cestas[i].id, cestas[i].tipo, cestas[i].conteudo);
    }

    // Buscando a cesta com ID 2
    printf("\nBuscando a cesta com ID %d:\n", idParaBuscar);
    buscaCesta(cestas, n, idParaBuscar);

    return 0;
}
