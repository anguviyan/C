#include <stdio.h>

int a;

int main(void)
{
	printf("Enter the value: ");
	scanf("%d",&a);
	if(a < 0)
		printf("The value %d is negative\n",a);
	else
		printf("The value %d is positive\n",a);

	return 0;
}
