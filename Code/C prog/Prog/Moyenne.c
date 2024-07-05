#include <stdio.h>

int main(void)
{
	float a,b;
	float moyenne;
	printf("premier nombre pour moyenne ");
	scanf("%f",&a);
	printf("deuxieme nombre pour moyenne ");
	scanf("%f",&b);
	moyenne = (a + b)/2;
	printf("\nla moyenne est %f bg", moyenne);
	return 0;
}
	
