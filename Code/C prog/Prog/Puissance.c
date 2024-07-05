#include <stdio.h>

float puissance(unsigned int n, float x);

int main(void)
{
	unsigned int n;
	float x=0,p=0;
	printf("Nombre ");
	scanf("%f", &x);
	printf("Puissance ");
	scanf("%d", &n);
	p = puissance(n,x);
	printf("%f",p);
	return 0;
}
/*Calcul de la puissance*/
float puissance(unsigned int n, float x)
{
	float p = 1;
	while (n > 0)
	{
		p = p * x;
		n--;
	}
	return p;
}
	
