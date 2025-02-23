// programa: conversor de temperatura do l�cio

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h> // fun��o toupper (mai�sculo & min�sculo)
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese_Brazil");

    char unidade;
    float temperatura, celsius, fahrenheit;

    printf("Bem-vindo ao Conversor de Temperatura do L�cio (CTL)! \n\n");

    printf("Temperatura em Celsius (C) ou Fahrenheit (F) ? ");
    scanf(" %c", &unidade);

    // conversor

    unidade = toupper(unidade);

    if(unidade == 'C'){
        printf("\nInsira a temperatura em Celsius (C�): ");
        scanf("%f", &celsius);
        fahrenheit = (celsius * 9 / 5) + 32;
        printf("\nA temperatura em Fahrenheit �: %.1f\n\n", fahrenheit);
    }
    
    else if(unidade == 'F'){
        printf("\nInsira a temperatura em Fahrenheit (F�): ");
        scanf("%f", &fahrenheit);
        celsius = (fahrenheit - 32) * 5 / 9;
        printf("\nA temperatura em Celsius �: %.1f\n\n", celsius);
    }
    
    else{
        printf("\n'%c' � uma unidade inv�lida de medida.\n", unidade);
    }
    
    // operadores l�gicos
    
    if (celsius >= 20 && fahrenheit >= 68){
        printf("Faz calor com uma temperatura de %.1f C� & %.1f F�\n", celsius, fahrenheit);
    }
    
    else if (celsius < 20 && fahrenheit < 68){
        printf("Faz frio com uma temperatura de %.1f C� & %.1f F�\n", celsius, fahrenheit);
    }
    
    return 0;
}
