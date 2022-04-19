#include <stdio.h>

int arr[][2] = {{1,2},
	       {3,4}};
int func(int (*ptr)[2]),i,j;

int main(void)
{
	func(arr);
	return 0;
}

int func(int (*ptr)[2])
{
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("The value of arr[%d][%d] is %d\n",i,j,*(*(ptr+i)+j));
		}
	}
}
