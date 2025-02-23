#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
    
    // programa: m�dia na disciplina de programa��o

	int media, prova1, prova2;
	
	printf("Bem-vindo ao Programa Calculador de M�dia (PCM)! \n\n");
	
	printf("Insira a sua nota na Prova 1: ");
	scanf("%d", &prova1);
    printf("Nota da Prova 1: %d \n\n", prova1);
    
    printf("Insira a sua nota da Prova 2: ");	 
    scanf("%d", &prova2);
    printf("Nota da Prova 2: %d \n\n", prova2); 
	
    media = prova1*0.5 + prova2*0.5;

	printf("Sua m�dia da disciplina de Programa��o �: %.1f \n", media);
	
    if (media >= 7){
    	printf("O aluno foi aprovado com uma m�dia final de %.1f \n\n", media);
	}
	else{
	    printf("O aluno foi reprovado com uma m�dia final de %.1f \n\n", media);
	}
	
    // programa: verificador de idade
	
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
    
    // programa: verificador de maior n�mero inteiro
    
    int a, b, c, maior;
    
    printf("Bem-vindo ao Programa Calculador de Maior N�mero Inteiro (PCMI)! \n\n");
	
	printf("Insira o n�mero 1: ");
	scanf("%d", &a);
    printf("O n�mero 1 �: %d \n\n", a);
	
	printf("Insira o n�mero 2: ");
	scanf("%d", &b);
    printf("O n�mero 2 �: %d \n\n", b);
    
    printf("Insira o n�mero 3: ");
	scanf("%d", &c);
    printf("O n�mero 3 �: %d \n\n", c);
    
    if (a > b && a > c) {
        maior = a;
    }
	else if (b > a && b > c){
        maior = b;
    }
	else {
        maior = c;
    }

    printf("O maior n�mero �: %d\n", maior);

    // programa: sal�rio b�nus XPTO 

    float salario, bonus;
    int temposervico;

    printf("Digite o sal�rio do funcion�rio: ");
    scanf("%f", &salario);

    printf("Digite o tempo de servi�o (em anos): ");
    scanf("%d", &temposervico);

    if (tempoServico >= 5) {
        bonus = salario * 0.20;
    } else {
        bonus = salario * 0.10; 
    }

    printf("O valor do b�nus �: R$ %.2f\n", bonus);

    // programa: empr�stimo banc�rio

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

	system("pause");
	return 0;
}
