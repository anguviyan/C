#include <stdio.h>

int a;

int func(int n);

int main(void)
{
	printf("Enter the value: ");
	scanf("%d",&a);

	printf("The Factorial of %d is %d\n",a,func(a));
	return 0;
}

int func(int n)
{
	if(n==0)
		return 1;

	return(n*func(n-1));
}


