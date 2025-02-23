// programa: verificador de idade

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");

	int idade;
	
	printf("Bem-vindo ao Programa Calculador de Idade (PCI)! \n\n");
	
	printf("Insira a sua idade: ");
	scanf("%d", &idade);
    printf("Sua idade é: %d \n\n", idade);
	
    if (idade >= 18){
    	printf("Você possui %d anos e é maior de idade", idade);
	}
	else{
    	printf("Você possui %d anos e é menor de idade", idade);
	}
    
    return 0;	
}
