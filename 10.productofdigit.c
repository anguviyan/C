#include <stdio.h>

int n,pro=1,rem;

int main(void)
{
	printf("Enter the value: ");
	scanf("%d",&n);

	while(n > 0)
	{
		rem = n%10;
		pro*=rem;
		n/=10;
	}
	printf("The value is %d\n",pro);
	return 0;
}
