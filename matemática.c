// jogo: n�meros! 

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
    
    int numero;
    int a, b, c;
    
    printf("Bem-vindo ao Jogo dos N�meros! \n\n");
    
    // antecessor e sucessor
    
    printf("Digite um n�mero aleat�rio: ");
    scanf("%d", &numero);
    
    printf("O antecessor deste n�mero �: %d \n", numero-1);
    printf("O sucessor deste n�mero �: %d \n\n", numero+1);
    
    // tabuada
    
    printf("A tabuada do n�mero %d �: \n", numero);
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
    
    // tr�s n�meros com contagem de dois em dois
    
    printf("Pr�ximos tr�s n�meros do valor %d contagem de dois em dois �: \n", numero);
    
    a = numero + 2;
    printf(" A: %d \n", a);
    
    b = a + 2;
    printf(" B: %d \n", b);
    
    c = b + 2;
    printf(" C: %d \n", c);
    
	return 0;
}
