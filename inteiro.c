// programa: verificador de maior n�mero inteiro

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese_Brazil");
    
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

    return 0;
}

