#include <stdio.h>

int main()
{

float tempF, tempC;

printf("Qual a temperatura em graus Fahrenheit: ");
scanf("%f", &tempF);

tempC = (tempF - 32)*5/9;

printf("Conversao de Fahrenheit para Celsius: %.2f", tempC);




}
