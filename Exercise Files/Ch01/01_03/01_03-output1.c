#include <stdio.h>

char *change(char *s)
{
	while( *s != '\0' )
	{
		*s+=1;
		s++;
	}

	return(s);
}

int main()
{
	char a[] = "ABC";

	printf("Before: %s\n",a);
	printf("After: %s\n",change(a) );

	return(0);
}
