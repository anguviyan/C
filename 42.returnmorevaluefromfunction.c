#include <stdio.h>

int sum,diff,i,j;

int func(int a,int b,int *ps,int *pd)
{
	*ps = a + b;
	*pd = a - b;
}

int main(void)
{
	i = 10;
	j = 20;

	func(i,j,&sum,&diff);

	printf("The values are %d,%d\n",sum,diff);

	return 0;
}
