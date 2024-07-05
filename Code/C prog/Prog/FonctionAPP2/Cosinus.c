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


	
int main(void)
{
	float a = ApproxCosinus(-4);
	printf("%f",a);
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
float factorielle(unsigned int n)     /*faire la factorisation d'un nombre*/
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
