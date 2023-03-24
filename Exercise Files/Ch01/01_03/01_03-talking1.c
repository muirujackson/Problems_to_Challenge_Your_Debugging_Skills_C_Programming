#include <stdio.h>

void whatever(void)
{
	puts("A line of text");
}

int main()
{
	int x;

	puts("This program crashes deliberately");

	x = 0;
	while( x<10 )
	{
		printf("#%d: ",x+1);
		whatever();
	}

	return(0);
}
