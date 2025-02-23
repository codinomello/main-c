// programa: salário bônus XPTO 

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");

	printf("Bem-vindo ao Programa Calculador de Salário (PCS)! \n\n");

    float salario, bonus;
    int temposervico;

    printf("Digite o salário do funcionário: ");
    scanf("%f", &salario);

    printf("Digite o tempo de serviço (em anos): ");
    scanf("%d", &temposervico);

    if (temposervico >= 5) {
        bonus = salario * 0.20;
    } else {
        bonus = salario * 0.10; 
    }

    printf("O valor do bônus é: R$ %.2f\n", bonus);
  
    return 0;	
}
