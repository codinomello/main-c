#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
    
    int a, b, c;
    a = 10;
    b = 5;
    int adi = a + b;
    int sub = a - b;
    int mul = a * b;
    int div = a / b;
    int mod = a % b;
    
    printf("O valor de A é: %d \n", a);
    printf("O valor de B é: %d \n", b);
    
    printf("Soma: %d \n", adi);
    printf("Subtração: %d \n", sub);
    printf("Multiplicação: %d \n", mul);
    printf("Divisão: %d \n", div);
    printf("Módulo: %d \n", mod);
    
    printf("A é maior que B? %d \n", (a > b));
    printf("A é menor que B? %d \n", (a < b));
    
    c = 10;
    c++;

    a = 10;
    b = 5;
    printf("O valor de C é: %d \n", ++c);

	system("pause");
	return 0;
}
