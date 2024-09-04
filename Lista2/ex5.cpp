#include<stdio.h>

int main()
{
	float tempC, tempF, conversaoCelsiusFahrenheit;
	printf("Entre com a temperatura em Celsius : ");
	scanf("%f", &tempC);
	
	tempF = (9*tempC+160)/5;
	
	printf("Conversao de Celsius para Fahrenheit: %.2f", tempF);
	

}
