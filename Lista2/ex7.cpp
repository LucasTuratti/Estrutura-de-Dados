#include<stdio.h>

int main()
{
	char nomevendedor[50];
	float salariofixo, salariofinal, comissao, totalvendas;
	
	printf("Insira o Nome do Vendedor(apenas letras): ");
	scanf("%s", &nomevendedor);
	
	printf("Insira o Salario Fixo do Vendedor: ");
	scanf("%f", &salariofixo);
	
	printf("Insira o total de vendas do vendedor em reais:");
	scanf("%f", &totalvendas);
	
	comissao = totalvendas *0.15;
	salariofinal = salariofixo + comissao;
	
	printf("\nNome do Vendedor: %s\n", nomevendedor);
	printf("Salario Fixo do Vendedor: $%.2f\n", salariofixo);
	printf("Salario Final: $%.2f\n", salariofinal);
}
