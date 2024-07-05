/*
 Fichier: Recherche caractere
 Auteurs: Raphael Bouchard bour
	      Alexis Guérard guea09020
 Date:	  4 octobre 2022
 Description: Permet de trouver la position de la premiere occurence d'un caractere d'une chaine de caractere
 */
#include <stdio.h>
int recherche(char caractere[1024], char lettre[1]);/*fonction qui cherche la premiere lettre dans une chaine de caractere donne*/
char ligne[] = {"------------------------------------------------------------------------------------------------------------------------"};
char tableau[]= {"\tChaine\t\t\tCaractere\tResultat attendu\tResultat obtenue\tValidation"};

int main(void)
{
	printf("\n");
	printf("\t\t\t\tPlan de test de la fonction Recherche d'un caractere\n");
	printf("%s",ligne);
	printf("\n%s",tableau);
	printf("\n%s",ligne);
	int test1 = recherche("1577","5");
	printf("\n  \t1557\t\t\t   5\t\t\t1\t\t\t%d",test1);
	if (test1 == 1)
	{
		printf("\t\t reussie");
	}
	else 
	{
		printf("\t\t echouee");
	}
	int test2 = recherche("fitness","3");
	printf("\n  \tfitness\t\t\t   3\t\t       -1\t\t       %d",test2);
	if (test2 == -1)
	{
		printf("\t\t reussie");
	}
	else 
	{
		printf("\t\t echouee");	
	}
	int test3 = recherche("chien","b");	
	printf("\n  \tchien\t\t\t   b\t\t       -1\t\t       %d",test3);
	if (test3 == -1)
	{
		printf("\t\t reussie");
	}
	else 
	{
		printf("\t\t echouee");
	}
	int test4 = recherche("Allo","A");
	printf("\n  \tAllo\t\t\t   A\t\t\t0\t\t        %d",test4);
	if (test4 == 0)
	{
		printf("\t\t reussie");
	}
	else 
	{
		printf("\t\t echouee");
	}
	printf("\n%s",ligne);		
	return 0;
}

int recherche(char caractere[1024], char lettre[1])/*fonction qui cherche la premiere lettre dans une chaine de caractere donne*/
{
	int position = 1;
	for (int i =0; caractere[i]!= '\0' && position != i; i++)
	{	
		if (caractere[i] == lettre[0])
		{
			position = i + 1;
		}
		else
		{
			position = 0;
		}
	}
	return position - 1;
}
	
	
