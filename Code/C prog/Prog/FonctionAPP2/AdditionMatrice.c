
/*
 Fichier: AdditionMatrice
 Auteurs: Raphael Bouchard bour0703
	      Alexis Guérard guea09020
 Date:	  4 octobre 2022
 Description: Permet d'additionner deux matrices
 */#include <stdio.h>
#define m 3
#define n 2
void afficherMatrice(int matrice[m][n]); //Prototype pour la fonction qui affiche une matrice
void additionMatrice(int matrice1[m][n],int matrice2[m][n],int matriceR[m][n]); //Prottotype pour la fonction qui additionne deux matrices
char ligne[] = {"--------------------------------------------------------------------------------------------\n"}; //Effet visuel
char tableau[]= {"\tMatrice A\t Matrice B\t    Matrice Attendue\t     Matrice Obtenue\n"}; //Effet visuel

			
int main(void) //Fonction principal avec le plan de validation
{
	printf("\n\t\t\tOperation Addition de deux matrices VALIDATION\n");
	printf("%s",ligne);
	printf("%s",tableau);
	printf("%s",ligne);	
	int matriceA[3][2] = {{1,2},{3,4},{5,6}};
	int matriceB[3][2] = {{6,5},{4,3},{2,1}};
	int matriceAtt[3][2] = {{7,7},{7,7},{7,7}};
	int matriceR[3][2];
	additionMatrice(matriceA,matriceB,matriceR);
	for (int i = 0; i <= m-1; i++)
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
		printf("|\t\t");
	}
	printf("\n\n");
	printf("%s",ligne);
	printf("\t\t\t\tResultat de la validation:\n");
	printf("%s",ligne);
	int validation = 1; //Validation par lordinateur pour comparer la valeur attendue et la valeur obtenue
	for (int i = 0; i <= m-1; i++)
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
		printf("\t\t\t\tLa validation est reussie");
	}
	else 
	{
		printf("\t\t\t\tLa validation est echouee");
	}
	
	printf("\n%s",ligne);
	return 0;
}

/*void afficherMatrice(int matrice[m][n]) //Fonction pour afficher une 
{
	for (int i = 0; i <= m-1 ; i++)
	{
		for (int j = 0; j <= n-1; j++)
		{
			printf ("%d\t", matrice[i][j]);
		}
		printf("\n");
	}
}*/


void additionMatrice(int matrice1[m][n],int matrice2[m][n],int matriceR[m][n])                   //Fonction pour additionner une matrice
{
	for (int i = 0; i <= m-1; i++)
	{
		for (int j = 0; j <= n-1; j++)
		{
			matriceR[i][j] = matrice1[i][j] + matrice2[i][j];
		}
	}
}
