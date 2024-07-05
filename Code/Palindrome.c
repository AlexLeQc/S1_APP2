/*
 Fichier: Palindrome
 Auteurs: Raphael Bouchard bour
	      Alexis Guérard guea09020
 Date:	  4 octobre 2022
 Description: Permet de trouver si une chaine de caractere est un palindrome
 */

#include <stdio.h>
int longueur(char caractere[1024]); 
int palindrome(char caractere[1024]); 
char ligne[] = {"--------------------------------------------------------------------------------------------"};
char tableau[]= {"\t  Mot\t\tResultat attendu\tResultat obtenu\t\tValidation"};

int main(void) //Plan de validation
{
	printf("\n");
	printf("\t\t\t\tPlan de test de la fonction palindrome\n");
	printf("%s",ligne);
	printf("\n%s",tableau);
	printf("\n%s",ligne);
	int test1 = palindrome("kayakp");
	printf("\n\tkayakp");
	printf("\t\t\t0");
	printf("\t\t\t%d",palindrome("kayakp"));
	if (test1 == 0)
	{
		printf("\t\t Reussie!");
	}
	else
	{
		printf("\t\t Echouee");
	}
	int test2 = palindrome("1234321");
	printf("\n\t1234321");
	printf("\t\t\t1");
	printf("\t\t\t%d",palindrome("1234321"));
	if (test2 == 1)
	{
		printf("\t\t Reussie!");
	}
	else
	{
		printf("\t\t Echouee");
	}
	int test3 = palindrome("abcmmmmdef");
	printf("\n\tabcmmmmdef");
	printf("\t\t0");
	printf("\t\t\t%d",palindrome("abcmmmmdef"));
	if (test3 == 0)
	{
		printf("\t\t Reussie!");
	}
	else
	{
		printf("\t\t Echouee");
	}
	int test4 = palindrome("Civic");
	printf("\n\tCivic");
	printf("\t\t\t0");
	printf("\t\t\t%d",palindrome("Civic"));
	if (test4 == 0)
	{
		printf("\t\t Reussie!");
	}
	else
	{
		printf("\t\t Echouee");
	}
	int test5 = palindrome("lamarieeiramal");
	printf("\n\tlamarieeiramal");
	printf("\t\t1");
	printf("\t\t\t%d",palindrome("lamarieeiramal"));
	if (test5 == 1)
	{
		printf("\t\t Reussie!");
	}
	else
	{
		printf("\t\t Echouee");
	}
	return 0;
}

int longueur(char caractere[1024]) /*trouve la longueur du caractere*/
{
	int compteur = 0;
	while (caractere[compteur] != '\0')
	{
		compteur = compteur + 1;
	}
	return compteur;
}

int palindrome(char caractere[1024]) //Trouve si le mot est un palindrome
{
	int validation = 1, debut = 0; //retourne 1 si le mot est un palindrome
	int fin = longueur(caractere)-1, b = fin;
	while (debut != b/2)
	{
		if (caractere[debut] != caractere[fin])
		{
			validation = 0; 
		}
		debut++;
		fin--;
		
	}
	return validation;
}
