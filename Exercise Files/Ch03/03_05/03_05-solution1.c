#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char original[32];
	char duplicate[32];
	int x,len;

	/* initialize the strings */
	for( x=0; x<32; x++ )
	{
		original[x] = '.';
		duplicate[x] = '.';
	}

	/* gather input */
	printf("Type your name: ");
	scanf("%s",original);

	len = strlen(original);

	/* duplicate the string */
	for( x=0; x<len+1; x++)
	{
		duplicate[x] = original[x];
	}

	/* output the original */
	printf("Original: '%s'\n",original);
	/* output the duplicate */
	printf("Duplicate: '%s'\n",duplicate);

	return(0);
}
