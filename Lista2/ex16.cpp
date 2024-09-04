#include <stdio.h>

int main() {
    int numero, idioma;
    printf("Digite um numero entre 0 e 5: ");
    scanf("%d", &numero);
    printf("Escolha o idioma: 1 para Portugues, 2 para Ingles: ");
    scanf("%d", &idioma);

    if (idioma == 1) 
	{ 
        switch(numero) 
		{
            case 0: printf("Zero\n"); break;
            case 1: printf("Um\n"); break;
            case 2: printf("Dois\n"); break;
            case 3: printf("Tres\n"); break;
            case 4: printf("Quatro\n"); break;
            case 5: printf("Cinco\n"); break;
            default: printf("Número fora do intervalo permitido.\n");
        }
    } 
	else if (idioma == 2) 
	{ 
        switch(numero) {
            case 0: printf("Zero\n"); break;
            case 1: printf("One\n"); break;
            case 2: printf("Two\n"); break;
            case 3: printf("Three\n"); break;
            case 4: printf("Four\n"); break;
            case 5: printf("Five\n"); break;
            default: printf("Number out of allowed range.\n");
        }
    } 
	else 
	{
        printf("Idioma inválido.\n");
    }

    return 0;
}

