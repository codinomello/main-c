// programa: verificador de maior número inteiro

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese_Brazil");
    
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

    return 0;
}

