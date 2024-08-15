#include <stdio.h>  // Inclui a biblioteca padr�o de entrada e sa�da

int main()  // Fun��o principal do programa
{
    int n, i;  // Declara��o das vari�veis inteiras 'n' e 'i'

    // Lendo o valor de 'n'
    printf("Digite um n�mero inteiro positivo: ");  // Exibe uma mensagem solicitando ao usu�rio que digite um n�mero
    scanf("%d", &n);  // L� o n�mero digitado pelo usu�rio e armazena na vari�vel 'n'

    // Exibindo os 'n' primeiros n�meros pares
    printf("Os %d primeiros n�meros pares s�o:\n", n);  // Exibe uma mensagem indicando que ser�o mostrados os primeiros 'n' n�meros pares
    
    for (i = 1; i <= n; i++)  // Loop que vai de 1 at� 'n'
    {
        printf("%d ", 2 * i);  // Calcula e imprime o en�simo n�mero par (2 * i)
    }

    printf("\n");  // Move o cursor para a pr�xima linha ap�s imprimir os n�meros pares

    // Exibindo os 'n' primeiros n�meros �mpares
    printf("Os %d primeiros n�meros �mpares s�o:\n", n);  // Exibe uma mensagem indicando que ser�o mostrados os primeiros 'n' n�meros �mpares
    
    for (i = 1; i <= n; i++)  // Loop que vai de 1 at� 'n'
    {
        printf("%d ", 2 * i - 1);  // Calcula e imprime o en�simo n�mero �mpar (2 * i - 1)
    }

    printf("\n");  // Move o cursor para a pr�xima linha ap�s imprimir os n�meros �mpares

    return 0;  // Retorna 0 para indicar que o programa terminou com sucesso
}
