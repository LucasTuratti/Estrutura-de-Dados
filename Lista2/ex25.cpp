#include <stdio.h>

int main() 
{
    int i, valor;
    int dentro = 0; 
    int fora = 0;   

    
    for (i = 0; i < 10; i++) {
        printf("Digite o valor %d: \n", i + 1);
        scanf("%d", &valor);

        
        if (valor >= 10 && valor <= 20) {
            dentro++;
        } else {
            fora++;
        }
    }

   
    printf("Quantidade de valores dentro do intervalo [10, 20]: %d\n", dentro);
    printf("Quantidade de valores fora do intervalo [10, 20]: %d\n", fora);

    return 0;
}

