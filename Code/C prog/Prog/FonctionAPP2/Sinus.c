/*
 Fichier: Sinus
 Auteurs: Raphael Bouchard bour
	      Alexis Guérard guea09020
 Date:	  4 octobre 2022
 Description: Permet de trouver le sinus
 */
#include <stdio.h>
#define pi 3.14159265
float puissance(unsigned int n, float x); /* Calculer la puissance d'un nombre*/
float factorielle(unsigned int n); /*faire la factorisation d'un nombre*/
float ApproxSinus(float angle);

char ligne[] = {"--------------------------------------------------------------------------------------------\n"};
char tableau[]= {"\t\tValeur \t\t Resultat obtenu\t    Resultat attendu\t     Validation\n"};
	
int main(void)
{ 
	float test1 = ApproxSinus(15.15);
	float test2 = ApproxSinus(0);
	float test3 = ApproxSinus(pi);
	float test4 = ApproxSinus(pi/2);
	printf("\n\t\t\t\t\t\tValidation fonction sinus");
	printf("\n\t\t%s",ligne);
	printf("\t%s",tableau);
	printf("\t\t%s",ligne);
	printf("\t\t\t  1");
	printf("\t\t      %.4f",test1);
	printf("\t\t\t0.8415");
	if (test1 > 0.84145 && test1 < 0.84154)
	{
		printf("\t\t       Reussie!\n");
	}
	else 
	{ 
		printf("\t\t       Echouee\n");
	}
	printf("\t\t\t  0");
	printf("\t\t      %.4f",test2);
	printf("\t\t\t0.0000");
	if (test2 == 0)
	{
		printf("\t\t       Reussie!\n");
	}
	else 
	{ 
		printf("\t\t       Echouee\n");
	}
	printf("\t\t\tPI/4");
	printf("\t\t      %.4f",test3);
	printf("\t\t\t0.7071");
	if (test3 > 0.70705 && test3 < 0.70714)
	{
		printf("\t\t       Reussie!\n");
	}
	else 
	{ 
		printf("\t\t       Echouee\n");
	}
	printf("\t\t\tPI/2");
	printf("\t\t      %.4f",test4);
	printf("\t\t\t1.0000");
	if (test4> 0.9999999 && test4 < 1.0001)
	{
		printf("\t\t       Reussie!\n");
	}
	else 
	{ 
		printf("\t\t       Echouee\n");
	}
	printf("\t\t%s",ligne);
}
	
float puissance(unsigned int n, float x) /* Calculer la puissance d'un nombre*/
{
	float p = 1;
	while (n > 0)
	{
		p = p * x;
		n = n - 1;
	}
	return p;
}
float factorielle(unsigned int n) /*faire la factorisation d'un nombre*/
{
	float valeur = 1;
	while (n > 0)
	{
		valeur = valeur * n;
		n = n - 1;
	}
	return valeur;
}


float ApproxSinus(float angle)
{
	#define terme 5
	float valeur = 0;
	float a = 1, z = 1,i;
	while (angle > pi)
	{
		angle = angle - 2*pi;
	}
	while (angle < -pi)
	{
		angle = angle + 2*pi;
	}
	
	for (i = 1; i <= terme; i = i + 1)
	{
		valeur = valeur + z*((puissance(a,angle))/(factorielle(a)));
		a = a + 2;
		z = z * -1;
	}
	return valeur;
}
		
