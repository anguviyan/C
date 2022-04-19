#include <stdio.h>

int a,b,c;

int main(void)
{
	printf("Enter the three value: ");
	scanf("%d%d%d",&a,&b,&c);

	if(a>b)
	{
		if(a>c)
			printf("A is bigger\n");
		else
			printf("C is bigger\n");
	}
	else 
	{
		if(b>c)
			printf("B is bigger\n");
		else
			printf("C is bigger\n");
	}

	return 0;
}
