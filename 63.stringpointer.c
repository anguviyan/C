#include <stdio.h>
#include <stdlib.h>

char *str;

int main(void)
{
	str = (char *)malloc(10*sizeof(char));
	if(str == NULL)
	{
		printf("There is no space in the memory\n");
		return -1;
	}
	printf("Enter the string: ");
	scanf("%s",str);
	printf("string is %s\n",str);
	return 0;
}
