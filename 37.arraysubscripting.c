#include <stdio.h>

int arr[] = {1,2,3,4,5};
int i;

int main(void)
{
	for(i=0;i<5;i++)
	{
		printf("The value of arr[%d] is %d %d\n",i,arr[i],i[arr]);
		printf("The Address of arr[%d] is %p %p\n",i,&arr[i],&i[arr]);
	}
	return 0;
}
