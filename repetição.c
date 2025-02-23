// programa: repetição e soma

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
    
    printf("Repetição + Soma!\n\n");
    
    int numero, i, soma = 0;

    for(i = 1; i <= 5; i++){
        printf("Digite o %d° número: ", i);
        scanf("%d", &numero);
        soma += numero;
    }
    
    printf("\nA soma dos 5 números é: %d\n", soma);

    return 0;
}
