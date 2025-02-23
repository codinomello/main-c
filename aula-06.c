#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
    
    printf("Debugger em C\n");

    float media;
    int nota1, nota2;
	    
    printf("\nDigite a primeira nota: ");
    scanf("%d", &nota1);
    
    printf("\nDigite a primeira nota: ");
    scanf("%d", &nota2);
    
    media = (nota1 + nota2) / 2;
    
    printf("\nA média é %.2f\n", media);
    
	return 0;
}
