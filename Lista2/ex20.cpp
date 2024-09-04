// 20) Fa�a um algoritmo que receba n�meros positivos at� que o n�mero zero seja digitado. 
// Calcule e mostre ao final: a soma de todos os n�meros digitados, a quantidade de n�meros digitados, 
// a m�dia dos n�meros digitados, o maior n�mero digitado; o menor n�mero digitado, a m�dia dos n�meros pares digitados, 
// a porcentagem de n�meros �mpares digitados;

#include <stdio.h>

int main() 
{
    
	int numero, quantidade = 0, soma = 0, maior, menor, somaPares = 0, quantidadePares = 0, quantidadeImpares = 0;
    float media, mediaPares, porcentagemImpares;

    printf("Digite numeros positivos (digite 0 para encerrar):\n");

    
    while (1) 
	{
        scanf("%d", &numero);

        if (numero == 0) 
		{
            break;  
        }

       
        soma += numero;
        quantidade++;

        
        if (quantidade == 1) 
		{
            maior = menor = numero;  
        } else {
            if (numero > maior) {
                maior = numero;
            }
            if (numero < menor) {
                menor = numero;
            }
        }
        if (numero % 2 == 0) {
            somaPares += numero;
            quantidadePares++;
        } else {
            quantidadeImpares++;
        }
    }

    if (quantidade > 0) 
	{
        media = (float)soma / quantidade;
    } else {
        media = 0;
    }

    if (quantidadePares > 0) 
	{
        mediaPares = (float)somaPares / quantidadePares;
    } else {
        mediaPares = 0;
    }

    
    if (quantidade > 0) {
        porcentagemImpares = ((float)quantidadeImpares / quantidade) * 100;
    } else {
        porcentagemImpares = 0;
    }

    
    printf("\nResultados:\n");
    printf("Soma dos numeros digitados: %d\n", soma);
    printf("Quantidade de numeros digitados: %d\n", quantidade);
    printf("M�dia dos n�meros digitados: %.2f\n", media);
    printf("Maior numero digitado: %d\n", maior);
    printf("Menor numero digitado: %d\n", menor);
    printf("Media dos numeros pares digitados: %.2f\n", mediaPares);
    printf("Porcentagem de numeros impares digitados: %.2f%%\n", porcentagemImpares);

    return 0;
}

