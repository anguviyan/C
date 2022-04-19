/*Find the bigger value*/

#include <stdio.h>

int a,b;

int main(void)
{
	printf("Enter the value: ");
	scanf("%d%d",&a,&b);

	if(a > b)
		printf("The value A is bigger\n");
	else
		printf("The value B is bigger\n");

	return 0;
}
