#include <stdio.h>

float wallis(float a)
{
	return(a/a-1.0) * (a/a+1.0);
}

int main()
{
	float p,pi;

	/* initialize pi to 2.0, not zero
	   and pull out the first function call */
	pi = wallis(2.0);
	/* start the loop at 4 (p+=2.0) */
	for( p=4.0; p<=100000.0; p+=2.0 )
	{
		pi *= wallis(p);
	}

	printf("%f\n",pi*2);

	return(0);
}
