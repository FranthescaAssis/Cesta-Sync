//validar CPF

#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <iostream>
#include <string>

bool validarCPF(const std::string& cpf) {
    if (cpf.length() != 11) {
        return false;

    int soma1 = 0;
    for (int i = 0; i < 9; i++) {
        soma1 += (cpf[i] - '0') * (i + 1); 
    }
    int resto1 = soma1 % 11;
    int primeiroDigitoVerificador = (resto1 == 10) ? 0 : resto1;
    
    int soma2 = 0;
    for (int i = 0; i < 9; i++) {
        soma2 += (cpf[i] - '0') * i; 
    }
    soma2 += primeiroDigitoVerificador * 9; 
    int resto2 = soma2 % 11;
    int segundoDigitoVerificador = (resto2 == 10) ? 0 : resto2;
    
    return (primeiroDigitoVerificador == cpf[9] - '0') && (segundoDigitoVerificador == cpf[10] - '0');
  }  
}

int main() {
	char cpf;
	
	printf("Digite o CPF: ");
	scanf("%s",&cpf);
	
	if (validarCPF){
        std::cout << "CPF válido!" << std::endl;
    } else {
        std::cout << "CPF inválido!" << std::endl;
    }

    return 0;
}
