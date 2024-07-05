/*
 Fichier: MultiplicationMatrice
 Auteurs: Raphael Bouchard bour
	      Alexis Guérard guea09020
 Date:	  4 octobre 2022
 Description: Permet de trouver multiplier deux matrices
 */
#include <stdio.h>
#define n 2
void afficherMatrice(int matrice[n][n]);
void multiplicationMatrice(int matrice1[n][n],int matrice2[n][n],int matriceR[n][n]);
char ligne[] = {"--------------------------------------------------------------------------------------------\n"}; //Effet visuel
char tableau[]= {"\tMatrice A\t Matrice B\t    Matrice Attendue\t     Matrice Obtenue\n"}; //Effet visuel

			
int main(void) //Fonction principal avec le plan de validation
{
	printf("\n\t\t\tPlan de test fonction multiplication matrice\n");
	printf("%s",ligne);
	printf("%s",tableau);
	printf("%s",ligne);	
	int matriceA[2][2] = {{-5,1000},{-4,-83}};
	int matriceB[2][2] = {{-5,1000},{-4,-83}};
	int matriceAtt[2][2] = {{-3975,-88000},{352,2889}};
	int matriceR[2][2];
	multiplicationMatrice(matriceA,matriceB,matriceR);
	for (int i = 0; i <= n-1; i++)
	{
		//Afficher Matrice A
		printf("\n\t|");
		for (int j=0; j <= n-1; j++)
		{
			printf(" %d ", matriceA[i][j]);
		}
		printf("|\t ");
		
		//Afficher Matrice B
		printf("|");
		for (int j=0; j <= n-1; j++)
		{
			printf(" %d ", matriceB[i][j]);
		}
		printf("|\t\t");
		
		//Afficher Matrice Attendue
		printf("|");
		for (int j=0; j <= n-1; j++)
		{
			printf(" %d ", matriceAtt[i][j]);
		}
		printf("|\t\t");
	
		//Afficher Matrice Obtenue
		printf("|");
		for (int j=0; j<= n-1; j++)
		{
			printf(" %d ", matriceR[i][j]);
		}
		printf("|\t");
	}
	printf("\n\n");
	printf("%s",ligne);
	printf("\t\t\t\tResultat de la validation:\n");
	printf("%s",ligne);
	int validation = 1; //Validation par lordinateur pour comparer la valeur attendue et la valeur obtenue
	for (int i = 0; i <= n-1; i++)
	{
		for (int j = 0; j <= n-1; j++)
		{
			if (matriceR[i][j] != matriceAtt[i][j])
			{
				validation = -1;
			}
		}
	}
	if (validation == 1)
	{
		printf("\t\t\t\t\tReussie!");
	}
	else 
	{
		printf("\t\t\t\t\tEchouee");
	}
	
	printf("\n%s",ligne);
	return 0;
}



void afficherMatrice(int matrice[n][n])
{
	for (int i = 0; i <= n-1 ; i++)
	{
		for (int j = 0; j <= n-1; j++)
		{
			printf ("%d\t", matrice[i][j]);
		}
		printf("\n");
	}
}

void multiplicationMatrice(int matrice1[n][n],int matrice2[n][n],int matriceR[n][n])
{
  for(int i = 0; i <= n-1 ; i++)
  {
    for(int j = 0; j <= n-1; j++)
    {
      matriceR[i][j]=0;
      for(int k = 0; k < n; k++)
      {
        matriceR[i][j] = matriceR[i][j] + matrice1[i][k] * matrice2[k][j];
      }
    }
  }
}
