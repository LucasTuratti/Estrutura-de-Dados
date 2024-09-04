// 19) João tem 1,45 m de altura e Maria tem 1,57. João cresce 0,23m por ano enquanto Maria cresce 0,15m. 
// Faça um algoritmo que mostre as alturas de João e Maria, ano a ano, até que João seja maior que Maria, 
// respondendo no final quantos anos serão necessários para que João seja o mais alto dos dois.

#include<stdio.h>

int main()
{
	float alturajoao = 1.45, alturaMaria = 1.57, crescimentoJoao = 0.23, crescimentoMaria = 0.15;
	int anos;
	
	printf("Ano 0: Joao = %.2f m, Maria = %.2f m\n", alturajoao, alturaMaria);

    while (alturajoao <= alturaMaria) 
	{
        anos++;
        alturajoao += crescimentoJoao;
        alturaMaria += crescimentoMaria;
        printf("Ano %d: Joao = %.2f m, Maria = %.2f m\n", anos, alturajoao, alturaMaria);
    }

    printf("\nSerao necessarios %d anos para que Joao seja mais alto que Maria.\n", anos);

    return 0;
	
}
