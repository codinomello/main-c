#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	int idade = 0;
	float salario = 10487.25;
	char nome[50];
	
	printf("Exemplo do comando de sa�da: \n");
	
	printf("Seu sal�rio �: %.3f \n", salario);
	
	printf("Exemplo do comando de entrada: \n");
	
	printf("Digite seu nome:");
	gets(nome);
	printf("Seu nome � %s \n", nome);
	
	printf("Digite sua idade: ");
	scanf("%d", &idade);
	printf("Sua idade �: %d \n", idade);

	system("pause");
}
