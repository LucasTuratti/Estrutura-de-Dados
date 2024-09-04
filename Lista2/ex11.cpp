// 11) O custo ao consumidor de um carro novo ? a soma do custo de f?brica com a percentagem do distribuidor e dos impostos 
// (aplicados, primeiro os impostos sobre o custo de f?brica, e depois a percentagem do distribuidor sobre o resultado). 
// Supondo que a percentagem do distribuidor seja de 28% e os impostos 45%. Escrever um programa que leia o custo de f?brica de um carro e 
// informe o custo ao consumidor do mesmo.

#include<stdio.h>

int main()
{
	float custoconsumidor, custodefabrica, porcentagemdistribuidor, impostos;
	
	printf("Preco de custo de fabrica: ");
	scanf("%f", &custodefabrica);
	
	custoconsumidor = custodefabrica*1.45*1,28;
	
	printf("Preco de custo ao consumidor: %.2f", custoconsumidor);
}
