#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	int idade = 0;
	float salario = 10487.25;
	char nome[50];
	
	printf("Exemplo do comando de saída: \n");
	
	printf("Seu salário é: %.3f \n", salario);
	
	printf("Exemplo do comando de entrada: \n");
	
	printf("Digite seu nome:");
	gets(nome);
	printf("Seu nome é %s \n", nome);
	
	printf("Digite sua idade: ");
	scanf("%d", &idade);
	printf("Sua idade é: %d \n", idade);

	system("pause");
}
