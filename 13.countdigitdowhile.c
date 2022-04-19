#include <stdio.h>

int i=1;

int main(void)
{
	do{
		printf("The values are %d\n",i++);
	}while(i <= 10);
	return 0;
}
