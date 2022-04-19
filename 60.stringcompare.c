#include <stdio.h>

char name1[] = "INDIA";
char name2[] = "INDI";

int pstrcmp(char *str1,char *str2)
{
	while(*str1 == *str2)
	{
		if(*str1 == '\0')
			return 0;
		str1++;
		str2++;
	}
	return (*str1-*str2);
}

int main(void)
{
	if(pstrcmp(name1,name2) == 0)
		printf("The string is equal\n");
	else
		printf("The string is not equal\n");

	return 0;
}
