#include <stdio.h>
#include <locale.h>

void cadastrarUsuario() {
    char nome[50];
    
    printf("Digite o nome do usu�rio que vai receber a cesta b�sica: ");
    scanf(" %[^\n]", nome);
    printf("Usu�rio cadastrado: %s\n", nome);
		}
int main() {
	setlocale(LC_ALL, "pt_BR.UTF-8");
    cadastrarUsuario();
    return 0;
}

