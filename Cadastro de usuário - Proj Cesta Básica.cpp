#include <stdio.h>
#include <locale.h>

void cadastrarUsuario() {
    char nome[50];
    
    printf("Digite o nome do usuário que vai receber a cesta básica: ");
    scanf(" %[^\n]", nome);
    printf("Usuário cadastrado: %s\n", nome);
		}
int main() {
	setlocale(LC_ALL, "pt_BR.UTF-8");
    cadastrarUsuario();
    return 0;
}

