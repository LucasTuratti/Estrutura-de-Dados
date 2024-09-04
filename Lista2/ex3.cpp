#include<stdio.h>

int main()
{
	int a,b,c,d;
	
	printf("Entre com algum valor para a: ");
	scanf("%i", &a);
	
	printf("Entre com algum valor para b: ");
	scanf("%i", &b);
	
	c=a;
	d=b;
	a=d;
	b=c;
	
	printf("O valor de a: %i\n", a);
	printf("O valor de b: %i\n", b);
}
