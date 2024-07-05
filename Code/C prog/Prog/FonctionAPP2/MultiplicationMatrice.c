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

int main(void)
{
	int matriceA[2][2] = {{1,2},{3,4}};
	int matriceB[2][2] = {{6,5},{4,3}};
	int matriceR[2][2];
	multiplicationMatrice(matriceA,matriceB,matriceR);
	afficherMatrice(matriceR);
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
