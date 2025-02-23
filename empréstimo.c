// programa: empréstimo bancário

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");

	printf("Bem-vindo ao Programa Calculador de Empréstimo (PCE)! \n\n");

    float emprestimo, salario, valorparcela;
    int numeroparcelas;

    printf("Digite o valor do empréstimo: ");
    scanf("%f", &emprestimo);

    printf("Digite o número de parcelas: ");
    scanf("%d", &numeroparcelas);

    printf("Digite o salário do solicitante: ");
    scanf("%f", &salario);

    valorparcela = emprestimo / numeroparcelas;

    if (valorparcela <= (salario * 0.30)) {
        printf("Empréstimo aprovado!\n");
    }
	else {
        printf("Empréstimo negado: valor das parcelas excede 30% do salário.\n");
    }

    return 0;	
}
