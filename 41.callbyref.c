#include <stdio.h>

int a,b;

int func(int *i,int *j)
{
	return (*i+*j);
}

int main(void)
{
	a = 10;
	b = 20;

	printf("The value of sum is %d\n",func(&a,&b));

	return 0;
}
