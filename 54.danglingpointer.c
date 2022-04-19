#include <stdio.h>
#include <stdlib.h>

int *ptr;

int main(void)
{
	ptr = (int *)malloc(5*sizeof(int));

	if(ptr == NULL)
	{
		printf("There is no space in the allocation\n");
		return -1;
	}

	free(ptr);

	printf("The value of ptr is %d\n",*ptr);//dangling pointer
		
	return 0;
}
