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


int main(void) //Plan de validation
{
	printf("%d",palindrome("kayak"));
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
