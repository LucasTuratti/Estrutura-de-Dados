// 21) Escrever um algoritmo que leia um valor para uma vari�vel n.
// Em seguida, calcule a tabuada de 1 a 10 para n. Mostre a tabuada um valor por linha.

#include<stdio.h>

int main()
{
    int n, i;

    
    printf("Digite um n�mero para calcular a tabuada: ");
    scanf("%d", &n);

    
    printf("Tabuada do %d:\n", n);
    
    for (i = 1; i <= 10; i++) 
	{
        printf("%d x %d = %d\n", n, i, n * i);
    }

    return 0;
}

