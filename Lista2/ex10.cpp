//10) Fa?a um programa que receba o pre?o de custo de um produto e mostre o valor de venda.
// Sabe-se que o pre?o de custo receber? um acr?scimo de acordo com um percentual informado pelo usu?rio.


#include <stdio.h>

int main() 
{
    float precodecusto, acrescimo, valordevenda;
    
    printf("Digite o preco de custo do produto: ");
    scanf("%f", &precodecusto);
    
    printf("Digite o percentual de acrescimo (em percentagem): ");
    scanf("%f", &acrescimo);
    
    valordevenda = precodecusto * (1 + acrescimo / 100);

    printf("O valor de venda do produto: R$ %.2f\n", valordevenda);
    
}

