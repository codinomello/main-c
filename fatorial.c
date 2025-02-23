// programa: repeti��o e fatorial

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
    
    printf("Fatorial + Inteiro!\n");
    
    int numero, i;
    unsigned int fatorial = 1;
    
    printf("\nDigite um n�mero: ");
    scanf("%d", &numero);
    
    if(numero < 0){
        printf("\nN�mero inv�lido! Insira um n�mero positivo.\n");
    }
	else{
        for(i = 1; i <= numero; i++){
            fatorial *= i;
        }
        printf("\nO fatorial de %d �: %u\n", numero, fatorial);
    }
    
	return 0;
}
