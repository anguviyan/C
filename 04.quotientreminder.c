#include <stdio.h>

int a,b,rem=0,quo=0;

int main(void)
{
	printf("Enter two value: ");
	scanf("%d%d",&a,&b);

	quo=a%b;
	rem=a/b;

	printf("Quotient is %d and Reminder is %d\n",quo,rem);

	return 0;
}
