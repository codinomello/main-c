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
    
    printf("O valor de A �: %d \n", a);
    printf("O valor de B �: %d \n", b);
    
    printf("Soma: %d \n", adi);
    printf("Subtra��o: %d \n", sub);
    printf("Multiplica��o: %d \n", mul);
    printf("Divis�o: %d \n", div);
    printf("M�dulo: %d \n", mod);
    
    printf("A � maior que B? %d \n", (a > b));
    printf("A � menor que B? %d \n", (a < b));
    
    c = 10;
    c++;

    a = 10;
    b = 5;
    printf("O valor de C �: %d \n", ++c);

	system("pause");
	return 0;
}
