#include<stdio.h>

int main()
{
	int dia;
	
	printf("Digite entre 1 a 7 para o dia da semana: ");
	scanf("%i",&dia);
	
	if(dia == 1)
	{
		printf("Domingo");
	}
	else if(dia == 2)
	{
		printf("Segunda-feira");
	}
	else if(dia == 3)
	{
		printf("Terca-feira");
	}
	else if(dia == 4)
	{
		printf("Quarta-feira");
	}
	else if(dia == 5)
	{
		printf("Quinta-feira");
	}
	else if(dia == 6)
	{
		printf("Sexta-feira");
	}
	else if(dia == 7)
	{
		printf("Sabado");
	}
	else
	{
		printf("\nEntre com um valor entre 1 a 7 para o dia da semana");
	}
}
