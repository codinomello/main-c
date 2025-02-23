// programa: tabuada simples

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	
    int numero, tabuada;
    
    printf("Bem-vindo ao Programa de Tabuada Simples (PTS)!\n\n");
    
    printf("Digite um número para sua tabuada: ");
    scanf("%d", &numero);
    
    printf("\nTabuada de %d:\n\n", numero);
    
    for (tabuada = 1; tabuada <= 10; tabuada++) {
        printf("%d x %d = %d\n", numero, tabuada, numero * tabuada);
    }
    
    return 0;
}

