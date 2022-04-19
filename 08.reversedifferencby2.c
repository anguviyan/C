#include <stdio.h>

int n;

int main(void)
{
	n = 10;
	while(n != 0)
	{
		printf("%d\t",n);
		n-=2;
	}
	printf("\n");
	return 0;
}
