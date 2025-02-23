// programa: imposto de renda

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese_Brazil");

    printf("Bem-vindo ao Programa Calculador de Imposto de Renda (PCIR)! \n\n");

    float salario, aliquota, parcela, imposto;

    // solicita o sal�rio ao usu�rio
    
    printf("Digite seu sal�rio mensal: ");
    scanf("%f", &salario);

    // vari�vel para o c�lculo do imposto
    
    imposto = 0.0;

    // imposto de acordo com as faixas salariais
    
    if (salario <= 1637.11){
        printf("\nN�o houve desconto em seu sal�rio, pois a aliquota no valor R$ %.2f � zero (0).", salario);
    }
    
    else if(salario <= 2453.50){
        aliquota = 7.5;
        parcela = 122.78;
        imposto = (salario * aliquota / 100) - parcela;
        printf("\nA aliquota � %.1f%%\n", aliquota);
        printf("A parcela reduzida � R$ %.2f\n", parcela);
        printf("O Imposto de Renda (IR) retido � R$ %.2f\n", imposto);
        printf("Seu sal�rio ap�s o Imposto de Renda (IR) � R$ %.2f\n", salario - imposto);
    }
    
    else if(salario <= 3271.38){
        aliquota = 15.0;
        parcela = 306.80;
        imposto = (salario * aliquota / 100) - parcela;
        printf("\nA aliquota � %.1f%%\n", aliquota);
        printf("A parcela reduzida � R$ %.2f\n", parcela);
        printf("O Imposto de Renda (IR) retido � R$ %.2f\n", imposto);
        printf("Seu sal�rio ap�s o Imposto de Renda (IR) � R$ %.2f\n", salario - imposto);
    }
    
    else if(salario <= 4087.65){
        aliquota = 22.5;
        parcela = 552.16;
        imposto = (salario * aliquota / 100) - parcela;
        printf("\nA aliquota � %.1f%%\n", aliquota);
        printf("A parcela reduzida � R$ %.2f\n", parcela);
        printf("O Imposto de Renda (IR) retido � R$ %.2f\n", imposto);
        printf("Seu sal�rio ap�s o Imposto de Renda (IR) � R$ %.2f\n", salario - imposto);
    }
    
    else{
        aliquota = 27.5;
        parcela = 756.93;
        imposto = (salario * aliquota / 100) - parcela;
        printf("\nA aliquota � %.1f%%\n", aliquota);
        printf("A parcela reduzida � R$ %.2f\n", parcela);
        printf("O Imposto de Renda (IR) retido � R$ %.2f\n", imposto);
        printf("Seu sal�rio ap�s o Imposto de Renda (IR) � R$ %.2f\n", salario - imposto);
    }

    return 0;
    
}
