#include <stdio.h>
#include <stdlib.h>

int *ptr,value,i;

int main(void)
{
	printf("Enter the value to be allocated for dynamic memory allocation: ");
	scanf("%d",&value);
	ptr = (int *)malloc(value*sizeof(int));
	if(ptr == NULL)
	{
		printf("There is no space in the memory\n");
		return -1;
	}
	for(i=0;i<value;i++)
	{
		printf("Enter the value to be added: ");
		scanf("%d",ptr+i);
	}

	for(i=0;i<value;i++)
		printf("The value are %d\n",*(ptr+i));

	free(ptr);

	return 0;
}
