#include <stdio.h>

/**
 * This is code is solving wallis Product
 * check out this link https://mindyourdecisions.com/blog/2016/10/12/the-wallis-product-formula-for-pi-and-its-proof/#:~:text=Each%20new%20pair%20is%20%5B2n,come%20from%20work%20in%201655.
 */

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
