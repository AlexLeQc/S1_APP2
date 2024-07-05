#include <stdio.h>

int main(void)
{
	float somme; /*Somme des valeurs du tableau*/
	float moyenne; /*Resultat final*/
	int i; /*compteur incrementale*/
	int valeur[10]={1,2,1,2,1,2,1,2,1,2}; /*taille deja fourni*/
	somme = 0;
	moyenne = 0;
	for (i=0; i<=9; i++)
	{
		somme = somme + valeur[i];
	}
	moyenne = somme/10;
	printf("La moyenne est %.2f", moyenne);
	return 0;
}
