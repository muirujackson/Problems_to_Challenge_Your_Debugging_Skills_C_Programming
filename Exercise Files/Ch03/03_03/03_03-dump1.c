#include <stdio.h>

int main()
{
	int array[5] = { 64, 128, 256, 512, 1024 };
	int *a,x;

	/* always initialize a pointer */
	a = array;

	for( x=0; x<5; x++ )
	{
		printf("%d\n",*a);
		a++;
	}

	return(0);
}
