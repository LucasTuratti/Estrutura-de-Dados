// 19) Jo�o tem 1,45 m de altura e Maria tem 1,57. Jo�o cresce 0,23m por ano enquanto Maria cresce 0,15m. 
// Fa�a um algoritmo que mostre as alturas de Jo�o e Maria, ano a ano, at� que Jo�o seja maior que Maria, 
// respondendo no final quantos anos ser�o necess�rios para que Jo�o seja o mais alto dos dois.

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
