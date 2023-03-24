#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char s1[] = "This is just a ";
	char s2[] = "test, only a test";
	char *both;

	/* allocate storge for both strings */
		/* plus one for the null character */
	both = (char *)malloc( strlen(s1) + strlen(s2) + 1 );
	if( both==NULL )
	{
		fprintf(stderr,"Unable to allocate memory\n");
		exit(1);
	}

	/* copy s1 into the buffer */
	strcpy(both,s1);
	/* append s2 to the buffer */
	strcat(both,s2);

	/* output the restuls */
	puts(both);

	return(0);
}
