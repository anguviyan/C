#include <stdio.h>

int i,n,sum,term=1;

int main(void)
{
	printf("Enter the terms to be add: ");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		sum+=term;
		term = term + i;
	}
	printf("The value are %d\n",sum);
	return 0;
}
