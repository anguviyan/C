#include <stdio.h>

char name[]="INDIA";
char *ptr;
int i;

int main (void)
{
	ptr = name;
	for(i=0;i<5;i++)
	{
		printf("The characters in the given string are %c\n",*(ptr+i));
		printf("The address of character in the given string are %p\n",ptr+i);
	}

	return 0;
}
