#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main(){
	
	setlocale( LC_ALL , "Portuguese_Brazil" );
	
	int idade = 15;
	int vida = 10;
	
	printf("Hoje � dia 20/08 \n");	
    printf("Voc� possui %d anos e %d pontos de vida", idade, vida);
    
}
