#include <stdio.h>
#include <stdlib.h>

int *ptr,value,i;

int main(void)
{
	printf("Enter the value to be added in the malloc: ");
	scanf("%d",&value);

	ptr = (int *)malloc(value*sizeof(int));
	if(ptr == NULL)
	{
		printf("There is no space in the memory\n");
		return -1;
	}

	for(i=0;i<value;i++)
		*(ptr+i) = i*2;

	ptr = (int *)realloc(ptr,9*sizeof(int));
	if(ptr == NULL)
	{
		printf("There is no space in the memory\n");
		return -1;
	}

	for(i=value;i<9;i++)
		*(ptr+i) = i*2;

	for(i=0;i<value+4;i++)
		printf("The value are %d\n",*(ptr+i));

	free(ptr);
	return 0;
}
