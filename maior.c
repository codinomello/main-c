// programa: maior n�mero

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
    
    printf("Qual � o maior n�mero?\n");
    
    int numero1, numero2, numero3;
    
    printf("\nDigite o 1� n�mero: ");
    scanf("%d", &numero1);
    
    printf("\nDigite o 2� n�mero: ");
    scanf("%d", &numero2);
    
    printf("\nDigite o 3� n�mero: ");
    scanf("%d", &numero3);
    
    if (numero1 >= numero2 && numero1 >= numero3){
        printf("\nO maior n�mero �: %d\n", numero1); 
    }
	else if (numero2 >= numero1 && numero2 >= numero3){
        printf("\nO maior n�mero �: %d\n", numero2);
    }
	else{
        printf("\nO maior n�mero �: %d\n", numero3);
    }

	return 0;
}
