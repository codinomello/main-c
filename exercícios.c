#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
    
    // programa: média na disciplina de programação

	int media, prova1, prova2;
	
	printf("Bem-vindo ao Programa Calculador de Média (PCM)! \n\n");
	
	printf("Insira a sua nota na Prova 1: ");
	scanf("%d", &prova1);
    printf("Nota da Prova 1: %d \n\n", prova1);
    
    printf("Insira a sua nota da Prova 2: ");	 
    scanf("%d", &prova2);
    printf("Nota da Prova 2: %d \n\n", prova2); 
	
    media = prova1*0.5 + prova2*0.5;

	printf("Sua média da disciplina de Programação é: %.1f \n", media);
	
    if (media >= 7){
    	printf("O aluno foi aprovado com uma média final de %.1f \n\n", media);
	}
	else{
	    printf("O aluno foi reprovado com uma média final de %.1f \n\n", media);
	}
	
    // programa: verificador de idade
	
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
    
    // programa: verificador de maior número inteiro
    
    int a, b, c, maior;
    
    printf("Bem-vindo ao Programa Calculador de Maior Número Inteiro (PCMI)! \n\n");
	
	printf("Insira o número 1: ");
	scanf("%d", &a);
    printf("O número 1 é: %d \n\n", a);
	
	printf("Insira o número 2: ");
	scanf("%d", &b);
    printf("O número 2 é: %d \n\n", b);
    
    printf("Insira o número 3: ");
	scanf("%d", &c);
    printf("O número 3 é: %d \n\n", c);
    
    if (a > b && a > c) {
        maior = a;
    }
	else if (b > a && b > c){
        maior = b;
    }
	else {
        maior = c;
    }

    printf("O maior número é: %d\n", maior);

    // programa: salário bônus XPTO 

    float salario, bonus;
    int temposervico;

    printf("Digite o salário do funcionário: ");
    scanf("%f", &salario);

    printf("Digite o tempo de serviço (em anos): ");
    scanf("%d", &temposervico);

    if (tempoServico >= 5) {
        bonus = salario * 0.20;
    } else {
        bonus = salario * 0.10; 
    }

    printf("O valor do bônus é: R$ %.2f\n", bonus);

    // programa: empréstimo bancário

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

	system("pause");
	return 0;
}
