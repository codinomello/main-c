#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()
{
	setlocale( LC_ALL , "Portuguese_Brazil" );
	
	printf("\n Ol�, Mundo!");
	system("pause");
}
