#include <stdio.h>
#include <stdlib.h>

int i;

int main(void)
{
	for(i=10;i>0;i--)
	{
		printf("%d\t",i--);
	}
	printf("\n");
	return 0;
}
