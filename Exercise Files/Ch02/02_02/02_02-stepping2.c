#include <stdio.h>

void output(int a)
{
	int x;

	for( x=0; x<3; x++ )
		printf("%d ",a);
	putchar('\n');
}

int main()
{
	int n;

	printf("Enter a number: ");
	scanf("%d",&n);

	output(n);

    return(0);
}
