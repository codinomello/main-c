#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int mensagem(int valor){
	printf("O valor informado é: %d", valor);
}

int somar(float valor1, float valor2){
    float soma = valor1 + valor2;
    return soma;
}

int subtrair(float contador){	
	if(contador <= 10){
		return contador - subtrair(contador + 1);
	}
	else{
		return 0;
	}
}

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
    
    printf("Recursividade em C\n");
    
    int valor;
    printf("\nInsira um valor: ");
    scanf("%d", &valor);
    mensagem(valor);
    
    float soma = somar(0.4, 5.6);
    printf("\n\nA soma dos valores é: %.2f", soma);
    
    int resultado = subtrair(1);
	printf("\n\nA subtração dos valores é: %d", resultado);
    
	return 0;
}
