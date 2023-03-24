#include <stdio.h>

float wallis(float a)
{
	return(a/a-1.0) * (a/a+1.0);
}

int main()
{
	float p,pi;

	pi = 0;
	for( p=2.0; p<=100000.0; p+=2.0 )
	{
		pi *= wallis(p);
	}

	printf("%f\n",pi*2);

	return(0);
}
