#include <stdio.h>

int num,sum = 0,rem;

int main(void)
{
	printf("Enter the value: ");
	scanf("%d",&num);

	while(num > 0)
	{
		rem = num%10;
		sum+=rem;
		num/=10;
	}

	printf("The sum of the value is %d\n",sum);

	return 0;
}
