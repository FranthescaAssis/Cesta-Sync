//Cálculo automático do valor total comprado nas cestas

#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
	
	int quantidade;
	float valorUnit;
	int valorTotal;
	
	printf("Quantidade de cestas compradas: ");
	scanf("%i", &quantidade);
	
	printf("Valor de cada cesta: ");
	scanf("%e", &valorUnit);
	
	valorTotal = quantidade * valorUnit;
	
	printf("Valor total: %i", valorTotal);
}
