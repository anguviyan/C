/*Find the given number is even or odd*/

#include <stdio.h>

int a;

int main(void)
{
	printf("Enter the value: ");
	scanf("%d",&a);

	if(a%2 == 0)
		printf("The value %d is even\n",a);
	else
		printf("The value %d is odd\n",a);

	return 0;
}
