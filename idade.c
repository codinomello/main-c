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
    printf("Sua idade �: %d \n\n", idade);
	
    if (idade >= 18){
    	printf("Voc� possui %d anos e � maior de idade", idade);
	}
	else{
    	printf("Voc� possui %d anos e � menor de idade", idade);
	}
    
    return 0;	
}
