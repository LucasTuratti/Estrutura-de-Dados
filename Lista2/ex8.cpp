#include <stdio.h>

int main()
{
	
	float cotacao,dolar,real;
	printf("Quantos dolares voce tem disponivel: ");
	scanf("%f", &dolar);
	printf("Qual a cota??o do dolar no dia de hoje: ");
	scanf("%f", &cotacao);	
	
	real = dolar*cotacao;
	
	printf("O valor convetido em real e de: %.2f ", real);


}

