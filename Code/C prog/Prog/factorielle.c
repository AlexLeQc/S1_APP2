#include <stdio.h>
unsigned int n;
unsigned int factorielle(unsigned int n);


unsigned int factorielle(unsigned int n)
{
	int t=1;
	while(n>1)
	{
		t = t * n;
		n = n - 1;
	}
	return t;
}


		
		
