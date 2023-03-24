#include <stdio.h>

int main()
{
	char string[] = "Good morning, human!\n";
	int x = 0;

	while( string[x] != '\0' )
	{
		putchar( string[x] );
		x++;
	}

    return(0);
}
