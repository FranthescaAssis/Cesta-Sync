//Contagem de cestas em estoque

#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <iostream>

int contador = 0;

void contarExecucao() {
    contador++;
    std::cout << "Adicionado mais " << contador << " cesta." << std::endl;
}

int main(){
	printf("\n Nova Cesta!");
	printf("\n Nome Completo: ");
	scanf("%s");
	printf(" Justificativa: ");
	scanf("%s");
	printf(" Data de Início: ");
	scanf("%s");
	
	contarExecucao();
    return 0;
    
    
}

