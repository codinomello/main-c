#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
    
    int idade = 15;
    
    if(idade > 18){
    	printf("Idade maior que 18 anos\n\n");
	}
	else{
	    printf("Idade menor que 18 anos\n\n");	
	}
	
	int dia = 3;
	
	switch (dia) {
	    case 1: {
	    	printf("Hoje � Domingo\n\n");
			break;
		}
	    case 2: {
	    	printf("Hoje � Segunda-feira\n\n");
			break;
		}
		case 3: {
	    	printf("Hoje � Ter�a-feira\n\n");
			break;
		}
	    case 4: {
	    	printf("Hoje � Quarta-feira\n\n");
			break;
		}
		case 5: {
	    	printf("Hoje � Quinta-feira\n\n");
			break;
		}
	    case 6: {
	    	printf("Hoje � Sexta-feira\n\n");
			break;
		}
		case 7: {
	    	printf("Hoje � S�bado\n\n");
			break;
		}
		default: {
			printf("Dia n�o v�lido!\n\n");
			break;
		}
    }
   
    printf("Loop WHILE\n\n");
   
    int inteiro;
   
    while(inteiro <= 10){
   	    printf("%d\n", inteiro); 
   	    inteiro++;
    }
    
    printf("\nLoop FOR\n\n");
    
	int contador;
    
    for(contador = 1; contador <= 5; contador++){
   	    printf("%d\n", contador); 
	}
    
	return 0;
}
