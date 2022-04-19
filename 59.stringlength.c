#include <stdio.h>

char name[] = "INDIA";
char *ptr;

int pstrlen(char *str)
{
	ptr = str;
	while(*ptr != '\0')
		ptr++;
	return ptr-str;
}

int main(void)
{
	printf("The number of charachers present in the string are %d\n",pstrlen(name));
	return 0;
}
