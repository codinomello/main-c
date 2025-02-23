// programa: calculadora simples

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	
    float num1, num2;
    int operador;
    
    printf("Bem-vindo ao Programa de Calculadora Simples (PCS)!\n\n");
    
    printf("Digite o 1� n�mero: ");
    scanf("%f", &num1);
    
    printf("Digite o 2� n�mero: ");
    scanf("%f", &num2);
    
    printf("\nEscolha um operador:\n");
    
    printf("1: Adi��o\n");
    printf("2: Subtra��o\n");
    printf("3: Multiplica��o\n");
    printf("4: Divis�o\n");
    
    printf("Digite a sua escolha: ");
    scanf("%d", &operador);
    
    switch(operador){
        case 1:
            printf("\nResultado: %.2f + %.2f = %.2f\n", num1, num2, num1 + num2);
            break;
        case 2:
            printf("\nResultado: %.2f - %.2f = %.2f\n", num1, num2, num1 - num2);
            break;
        case 3:
            printf("\nResultado: %.2f * %.2f = %.2f\n", num1, num2, num1 * num2);
            break;
        case 4:
            if (num2 != 0) {
                printf("\nResultado: %.2f / %.2f = %.2f\n", num1, num2, num1 / num2);
            } 
			else {
                printf("\nErro: Divis�o por zero n�o permitida!\n");
            }
            break;
        default:
            printf("\nOp��o inv�lida!\n");
            break;
    }
    
    return 0;
}

