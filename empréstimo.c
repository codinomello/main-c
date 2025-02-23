// programa: empr�stimo banc�rio

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");

	printf("Bem-vindo ao Programa Calculador de Empr�stimo (PCE)! \n\n");

    float emprestimo, salario, valorparcela;
    int numeroparcelas;

    printf("Digite o valor do empr�stimo: ");
    scanf("%f", &emprestimo);

    printf("Digite o n�mero de parcelas: ");
    scanf("%d", &numeroparcelas);

    printf("Digite o sal�rio do solicitante: ");
    scanf("%f", &salario);

    valorparcela = emprestimo / numeroparcelas;

    if (valorparcela <= (salario * 0.30)) {
        printf("Empr�stimo aprovado!\n");
    }
	else {
        printf("Empr�stimo negado: valor das parcelas excede 30% do sal�rio.\n");
    }

    return 0;	
}
