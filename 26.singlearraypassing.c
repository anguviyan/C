#include <stdio.h>

int arr[] = {1,2,3,4,5};
int i;
void func(int a);

int main(void)
{
	for(i=0;i<5;i++)
	{
		func(arr[i]);
	}

	return 0;
}

void func(int a)
{
	printf("The value is %d\n",a);
}
