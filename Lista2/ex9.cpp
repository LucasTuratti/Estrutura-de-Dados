#include <stdio.h>

int main()
{
	
	float valor,juros=0.0070;
	
	printf("Qual o valor que foi depositado: ");
	scanf("%f", &valor);
			
	printf("O valor com rendimento de um mes na poupanca ? de: %.2f", valor+valor*juros );
	
}
