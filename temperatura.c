// programa: conversor de temperatura do lúcio

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h> // função toupper (maiúsculo & minúsculo)
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese_Brazil");

    char unidade;
    float temperatura, celsius, fahrenheit;

    printf("Bem-vindo ao Conversor de Temperatura do Lúcio (CTL)! \n\n");

    printf("Temperatura em Celsius (C) ou Fahrenheit (F) ? ");
    scanf(" %c", &unidade);

    // conversor

    unidade = toupper(unidade);

    if(unidade == 'C'){
        printf("\nInsira a temperatura em Celsius (C°): ");
        scanf("%f", &celsius);
        fahrenheit = (celsius * 9 / 5) + 32;
        printf("\nA temperatura em Fahrenheit é: %.1f\n\n", fahrenheit);
    }
    
    else if(unidade == 'F'){
        printf("\nInsira a temperatura em Fahrenheit (F°): ");
        scanf("%f", &fahrenheit);
        celsius = (fahrenheit - 32) * 5 / 9;
        printf("\nA temperatura em Celsius é: %.1f\n\n", celsius);
    }
    
    else{
        printf("\n'%c' é uma unidade inválida de medida.\n", unidade);
    }
    
    // operadores lógicos
    
    if (celsius >= 20 && fahrenheit >= 68){
        printf("Faz calor com uma temperatura de %.1f C° & %.1f F°\n", celsius, fahrenheit);
    }
    
    else if (celsius < 20 && fahrenheit < 68){
        printf("Faz frio com uma temperatura de %.1f C° & %.1f F°\n", celsius, fahrenheit);
    }
    
    return 0;
}
