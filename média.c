// programa: m�dia na disciplina de programa��o

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");

	int media, prova1, prova2;
	
	printf("Bem-vindo ao Programa Calculador de M�dia (PCM)! \n\n");
	
	printf("Insira a sua nota na Prova 1: ");
	scanf("%d", &prova1);
    printf("Nota da Prova 1: %d \n\n", prova1);
    
    printf("Insira a sua nota da Prova 2: ");	 
    scanf("%d", &prova2);
    printf("Nota da Prova 2: %d \n\n", prova2); 
	
    media = prova1*0.5 + prova2*0.5;

	printf("Sua m�dia da disciplina de Programa��o �: %d \n", media);
	
    if (media >= 7){
    	printf("O aluno foi aprovado com uma m�dia final de %d \n\n", media);
	}
	else{
	    printf("O aluno foi reprovado com uma m�dia final de %d \n\n", media);
	}
  
    return 0;	
}
