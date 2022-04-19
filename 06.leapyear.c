#include <stdio.h>

int year;

int main(void)
{
	printf("Enter the year: ");
	scanf("%d",&year);
	if(year%100 != 0)
	{
		if(year%4 == 0)
			printf("Entered year %d is leap year\n",year);
		else
			printf("Entered year %d is not leap year\n",year);
	}
	else
	{
		if(year%400 == 0)
			printf("Entered year %d is leap year\n",year);
		else
			printf("Entered year %d is not leap year\n",year);
	}

	return 0;
}
