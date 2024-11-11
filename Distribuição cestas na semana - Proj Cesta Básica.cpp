#include <stdio.h>
#include <locale.h>
#define DIAS_SEMANA 7 
#define FAMILIAS 5 

void exibirDistribuicao(int matriz[DIAS_SEMANA][FAMILIAS]) {
    printf("\nDistribui��o de Cestas B�sicas (1: Cesta entregue, 0: N�o entregue):\n");
    const char* dias[] = {"Segunda", "Ter�a", "Quarta", "Quinta", "Sexta", "S�bado", "Domingo"};
    
    for (int i = 0; i < DIAS_SEMANA; i++) {
        printf("%s: ", dias[i]);
        for (int j = 0; j < FAMILIAS; j++) {
            printf("%d ", matriz[i][j]);  // Recebeu cesta? Sim (1) N�o (0)
        }
        printf("\n");
      }
}
	int main() {
		setlocale(LC_ALL, "Portuguese");
   		 int matriz[DIAS_SEMANA][FAMILIAS] = {
        {1, 0, 1, 0, 1},  //Segunda
        {0, 1, 0, 1, 0},  //Ter�a
        {1, 1, 1, 0, 1},  //Quarta
        {0, 0, 1, 1, 1},  //Quinta
        {1, 0, 0, 1, 0},  //Sexta
        {1, 1, 1, 1, 0},  //S�bado
        {0, 1, 0, 1, 1}   // Domingo
    };

    exibirDistribuicao(matriz);  //distribui��o das cestas.

    return 0;
}

