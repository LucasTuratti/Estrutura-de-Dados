// 24) Escreva um algoritmo em C que realize a multiplica��o de A por B, ou seja, A * B, atrav�s de adi��es (somas). 
// Esses dois valores s�o inseridos pelo usu�rio. EX: transformar 4*3 em 4+4+4.

#include <stdio.h>

int main() 
{
    int A, B, resultado = 0;

    printf("Digite o valor de A: ");
    scanf("%d", &A);

    printf("Digite o valor de B: ");
    scanf("%d", &B);
    
    printf("%d * %d = ", A, B);
    
    for (int i = 0; i < B; i++) {
        resultado += A;  

        
        if (i == B - 1) 
		{
            printf("%d", A);  
        } else {
            printf("%d + ", A);
        }
    }

    
    printf(" = %d\n", resultado);

    return 0;
}


