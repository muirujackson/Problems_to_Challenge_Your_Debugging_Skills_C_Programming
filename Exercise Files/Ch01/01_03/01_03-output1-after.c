#include <stdio.h>

char *change(char *s)
{
printf("%d:%p\n",__LINE__,s);
	while( *s != '\0' )
	{
		*s+=1;
		s++;
	}

printf("%d:%p\n",__LINE__,s);
	return(s);
}

int main()
{
	char a[] = "ABC";

printf("%d:%p\n",__LINE__,a);
	printf("Before: %s\n",a);
	printf("After: %s\n",change(a) );

	return(0);
}
