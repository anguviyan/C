#include <stdio.h>

int i,pro,j;

int main(void)
{
	printf("Enter the value: ");
	scanf("%d",&j);

	for(i=0;i<j;i++)
	{
		pro+=2;
	}
	printf("The value is %d\n",pro);
	return 0;
}
