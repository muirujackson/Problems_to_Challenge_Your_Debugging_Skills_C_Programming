#include <stdio.h>

int main()
{
	char string[] = "ABCD";
	int x;

	x = 0;
	while( string[0] != 'D' )
	{
		putchar( string[x] );
		x++;
	}
	putchar('\n');

	return(0);
}
