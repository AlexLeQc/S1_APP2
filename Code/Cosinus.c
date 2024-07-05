/*
 Fichier: Cosinus
 Auteurs: Raphael Bouchard bour
	      Alexis Guérard guea09020
 Date:	  4 octobre 2022
 Description: Permet de trouver le cosinus d'un angle
 */
#include <stdio.h>
#define pi 3.14159265
float puissance(unsigned int n, float x); /* Calculer la puissance d'un nombre*/
float factorielle(unsigned int n); /*faire la factorisation d'un nombre*/
float ApproxCosinus(float angle);

char ligne[] = {"--------------------------------------------------------------------------------------------\n"};
char tableau[]= {"\tValeur \t\t Resultat obtenue\t    Resultat attendu\t     Validation\n"};

	
int main(void)
{
	float test1 = ApproxCosinus(10);
	float test2 = ApproxCosinus(-4);
	float test3 = ApproxCosinus(pi/3);
	float test4 = ApproxCosinus(pi);
	printf("\n\t\t\t\tPlan de test fonction cosinus");
	printf("\n\%s",ligne);
	printf("%s",tableau);
	printf("%s",ligne);
	printf("\t10");
	printf("\t\t     %.4f",test1);
	printf("\t\t       -0.8391");
	if (test1 == -0.8391)
	{
		printf("\t\t       Reussie!\n");
	}
	else 
	{ 
		printf("\t\t       Echouee\n");
	}
	printf("\t-4");
	printf("\t\t     %.4f",test2);
	printf("\t\t       -0.6536");
	if (test2 == -0.6536)
	{
		printf("\t\t       Reussie!\n");
	}
	else 
	{ 
		printf("\t\t       Echouee\n");
	}
	printf("\tPI/3");
	printf("\t\t      %.4f",test3);
	printf("\t\t\t0.5000");
	if (test3 > 0.5000 && test3 < 0.50004)
	{
		printf("\t\t       Reussie!\n");
	}
	else 
	{ 
		printf("\t\t       Echouee\n");
	}
	printf("\tPI");
	printf("\t\t     %.4f",test4);
	printf("\t\t       -1.0000");
	if (test4 == -1)
	{
		printf("\t\t       Reussie!\n");
	}
	else 
	{ 
		printf("\t\t       Echouee\n");
	}
	printf("%s",ligne);
	printf("\n\nIl est important de comprendre que les valeurs ne sont pas exacte du a lapproximation par 5 termes\n");
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


float ApproxCosinus(float angle)
{
	#define terme 5
	float valeur = 0;
	float a = 0, z = 1,i;
	while (angle > pi)
	{
		angle = angle - 2*pi;
	}
	while (angle < -pi)
	{
		angle = angle + 2*pi;
	}
	for (i = 0; i <= terme - 1; i = i + 1)
	{
		valeur = valeur + (z*((puissance(a,angle))/(factorielle(a))));
		a = a + 2;
		z = z * -1;
	}
	return valeur;
}	
