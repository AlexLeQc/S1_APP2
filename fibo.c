
#include <stdio.h>


void fibonnacci()
{
	int n;
	printf("\t Entree le nombre de nombre de fibonacci\n");
    scanf("%d", &n);
    int liste[100];
    liste[0]= 0;
    liste[1]= 1;
    printf("%d, %d, ",liste[0],liste[1]);
    for (int i = 2; i < n; i++)
    {
		liste[i] = liste[i-1] + liste[i-2];
		printf("%d, ", liste[i]);
		
	}
}

void etoile(char nbrEtoile[100], int n) //n = nombre etoile qu'on veut
{
	for(int i = 0; i<n;i++)
	{
		nbrEtoile[i]='*';
		printf("%c",nbrEtoile[i]);
	}
	nbrEtoile[n]='\0';
}

int main(void)
{
	
	while(1)
	{
		char bs[100];
		int nombre;
		printf("mettre nombre etoile que tu veux gros bs\n");
		scanf("%d", &nombre);
		etoile(bs,nombre);
	}
}

