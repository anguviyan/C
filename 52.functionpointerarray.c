#include <stdio.h>

char *operators[] = {"add","sub","pro","div"};

int add(int a,int b);
int sub(int a,int b);
int pro(int a,int b);
int div(int a,int b);

int i;

int main(void)
{
	int (*ptr[]) (int,int) = {add,sub,pro,div};
	
	for(i=0;i<4;i++)
	{
		printf("The value of %s are %d\n",operators[i],(*ptr[i])(4,5));
	}

	return 0;
}

int add(int a,int b)
{
	return (a+b);
}

int sub(int a,int b)
{
	return (a-b);
}

int pro(int a,int b)
{
	return (a*b);
}

int div(int a,int b)
{
	return (a/b);
}
