#include <stdio.h>
#include <stdlib.h>

int *ptr,value,i;

int main(void)
{
        printf("Enter the number of values to be added in the calloc function: ");
	scanf("%d",&value);
	ptr = (int *)calloc(value,sizeof(int));
	if(ptr == NULL)
		printf("There is no memory in the calloc function\n");

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
