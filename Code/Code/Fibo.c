#include <stdio.h>
void fibonaicci(int n)
{
	int somme_actuelle = 0;
	int somme_precedente = 1;
	int save;
	printf ("%d\n", somme_actuelle);
	for (int i = 1; i < n; i ++)
	{
		save = somme_actuelle;
		somme_actuelle = somme_precedente + somme_actuelle;
		somme_precedente = save;
		printf("%d\n", somme_actuelle);
	}
}

int matricetriangle( int matrice[4][4])
{
	int rep=1;	
	for (int i = 0; i <= 3; i++)
	{
		for (int j = 0; j <= 3; j++)
		{
			if (i>j && matrice[i][j]!=0)
			{
				rep = 0;
			}
		}
	}		
return rep;
}
int main(void)
{
	int matrice1[4][4] = { { 7, 9, 2, 8 }, { 0, 7, 4, 6 }, 
                         { 0, 0, 6, 4 }, { 0, 0, 0, 2 } };
    printf("%d",matricetriangle(matrice1));
	return 0;
}

		
		
