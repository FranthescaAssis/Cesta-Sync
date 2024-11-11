#include <stdio.h>
#include <locale.h>
#define DIAS_SEMANA 7 
#define FAMILIAS 5 

void exibirDistribuicao(int matriz[DIAS_SEMANA][FAMILIAS]) {
    printf("\nDistribuição de Cestas Básicas (1: Cesta entregue, 0: Não entregue):\n");
    const char* dias[] = {"Segunda", "Terça", "Quarta", "Quinta", "Sexta", "Sábado", "Domingo"};
    
    for (int i = 0; i < DIAS_SEMANA; i++) {
        printf("%s: ", dias[i]);
        for (int j = 0; j < FAMILIAS; j++) {
            printf("%d ", matriz[i][j]);  // Recebeu cesta? Sim (1) Não (0)
        }
        printf("\n");
      }
}
	int main() {
		setlocale(LC_ALL, "Portuguese");
   		 int matriz[DIAS_SEMANA][FAMILIAS] = {
        {1, 0, 1, 0, 1},  //Segunda
        {0, 1, 0, 1, 0},  //Terça
        {1, 1, 1, 0, 1},  //Quarta
        {0, 0, 1, 1, 1},  //Quinta
        {1, 0, 0, 1, 0},  //Sexta
        {1, 1, 1, 1, 0},  //Sábado
        {0, 1, 0, 1, 1}   // Domingo
    };

    exibirDistribuicao(matriz);  //distribuição das cestas.

    return 0;
}

