/*
   Here is the repaired source code
 */
#include <stdio.h>
#include <ctype.h>

int main()
{
	char string[] = "Hello again, weird little program.\n";
	char *s;

	/* always initialize a pointer! */
	s = string;

	/* parse words */
	while( *s != '\0' )
	{
		if( !isalpha(*s) )
		{
			while( !isalpha(*s) )
			{
				/* at this point, s may point beyond the end
				   of the string. So add a test: */
				if( *s=='\0' )
					break;
				s++;
			}
			putchar('\n');
		}
		else
		{
			putchar(*s);
			s++;
		}

	}

	return(0);
}
