#include <stdio.h>

int n,k,rem,btod,m=1,bal=1;

int main(void)
{
	printf("Enter the binary value: ");
	scanf("%d",&n);
	k = n;
	while(n)
	{
		rem = n%10;
		bal = rem*m;
		btod += bal;
		m*=2;
		n/=10;
	}

	printf("The binary value of %d is %d\n",k,btod);
	return 0;
}
