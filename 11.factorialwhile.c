#include <stdio.h>

int n,fact=1,i;

int main(void)
{
	printf("Enter the value: ");
	scanf("%d",&n);
	i = n;
	while(n)
	{
		fact*=n--;
		//n--;
	}

	printf("The factorial of %d is %d\n",i,fact);
	return 0;
}
