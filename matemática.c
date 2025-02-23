// jogo: números! 

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
    
    int numero;
    int a, b, c;
    
    printf("Bem-vindo ao Jogo dos Números! \n\n");
    
    // antecessor e sucessor
    
    printf("Digite um número aleatório: ");
    scanf("%d", &numero);
    
    printf("O antecessor deste número é: %d \n", numero-1);
    printf("O sucessor deste número é: %d \n\n", numero+1);
    
    // tabuada
    
    printf("A tabuada do número %d é: \n", numero);
    printf(" 1 x %d: = %d \n", numero, 1*numero);
    printf(" 2 x %d: = %d \n", numero, 2*numero);
    printf(" 3 x %d: = %d \n", numero, 3*numero);
    printf(" 4 x %d: = %d \n", numero, 4*numero);
    printf(" 5 x %d: = %d \n", numero, 5*numero);
    printf(" 6 x %d: = %d \n", numero, 6*numero);
    printf(" 7 x %d: = %d \n", numero, 7*numero);
    printf(" 8 x %d: = %d \n", numero, 8*numero);
    printf(" 9 x %d: = %d \n", numero, 9*numero);
    printf(" 10 x %d: = %d \n\n", numero, 10*numero);
    
    // três números com contagem de dois em dois
    
    printf("Próximos três números do valor %d contagem de dois em dois é: \n", numero);
    
    a = numero + 2;
    printf(" A: %d \n", a);
    
    b = a + 2;
    printf(" B: %d \n", b);
    
    c = b + 2;
    printf(" C: %d \n", c);
    
	return 0;
}
