#include <stdio.h>

char name[] = "INDIA";
int i;

int main(void)
{
	for(i=0;name[i]!='\0';i++)
	{
		printf("characters in the strings are %c\n",name[i]);
		printf("Address of the character in the string are %p\n",&name[i]);
	}

	return 0;
}
