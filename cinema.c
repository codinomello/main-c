// programa: cinema do nelson

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
   setlocale(LC_ALL, "Portuguese_Brazil");
   
   int filme = 0, ingressos = 0;
   float total = 0;

   printf("Bem-vindo ao sistema de compras de ingresso! \n");
   printf("Valor de cada ingresso R$12,50 \n");
   printf("Escolha a opção de filme: \n");

   printf("------- CARTAZ ------- \n");
   
   printf("1: Vingadores 4, Marvel \n");
   printf("2: Como Treinar o Seu Dragão 3, Pixar \n");
   printf("3: Dumbo, Disney \n");
   printf("4: Shazam!, DC Comics \n");

   scanf("%d", &filme);

   printf("Insira a quantidade de ingressos\n");
   scanf("%d", &ingressos);

   total = ingressos * 12.50;

   printf("Obrigado! Para %d ingresso(s) do filme número %d, seu total será de R$ %.2f \n", ingressos, filme, total);
   
   system("pause");
}
