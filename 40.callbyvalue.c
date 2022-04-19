#include <stdio.h>

int a,b;

int func(int i,int j)
{
	int sum = i + j;
	printf("The value of sum is %d\n",sum);
}

int main(void)
{
	a = 10;
	b = 20;

	func(a,b);

	return 0;
}
