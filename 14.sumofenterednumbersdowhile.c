#include <stdio.h>

int i,sum;

int main(void)
{
	do{
	printf("Enter the value: ");
	scanf("%d",&i);

	sum += i;

	}while(i!=0);
	printf("The sum of the value is %d\n",sum);
	return 0;
}
