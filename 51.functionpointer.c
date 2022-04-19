#include <stdio.h>

int (*ptr)(float,int);

int add(float a,int b);

int main(void)
{
	ptr = add;
	printf("The value in the form of function pointer are %d\n",(*ptr)(4.5,5));

	printf("The value are %d\n",add(4.5,5));
	return 0;
}

int add(float a,int b)
{
	int sum = a + b;
	return sum;
}
