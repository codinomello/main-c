// programa: repeti��o e soma

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
    
    printf("Repeti��o + Soma!\n\n");
    
    int numero, i, soma = 0;

    for(i = 1; i <= 5; i++){
        printf("Digite o %d� n�mero: ", i);
        scanf("%d", &numero);
        soma += numero;
    }
    
    printf("\nA soma dos 5 n�meros �: %d\n", soma);

    return 0;
}
