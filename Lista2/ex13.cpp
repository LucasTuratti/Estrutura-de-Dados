// 13) Dois carros percorreram diferentes dist?ncias em diferentes tempos. 
// Sabendo que a velocidade m?dia ? a raz?o entre a dist?ncia percorrida e o tempo levado para percorr?-la, 
// fa?a um programa que leia as dist?ncias que cada carro percorreu e o tempo que cada um levou,
// e indique o carro que teve maior velocidade m?dia (ou se as  velocidades s?o iguais).

#include <stdio.h>

int main()
{

float distancia1, distancia2, tempolevado1, tempolevado2, velmedia1, velmedia2;

printf("Qual a distancia percorrida do carro 1: ");
scanf("%f", &distancia1);
printf("Qual a distancia percorrida do carro 2: ");
scanf("%f", &distancia2);

printf("Qual tempo levado do carro 1 para percorrer a distancia %.2f: ", distancia1);
scanf("%f", &tempolevado1);
printf("Qual tempo levado do carro 2 para percorrer a distancia %.2f: ", distancia2);
scanf("%f", &tempolevado2);

velmedia1 = distancia1/tempolevado1;
velmedia2 = distancia2/tempolevado2;

if(velmedia1>velmedia2){
	printf("O carro que teve a maior velocidade media foi carro 1 com %.2f", velmedia1);
}
else if(velmedia2>velmedia1)
{
	printf("O carro que teve a maior velocidade media foi carro 2 com %.2f", velmedia2);
}
else
{
	printf("A velocidade media de ambos os carros s?o iguais");
}
return 0;
}
