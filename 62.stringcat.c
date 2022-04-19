#include <stdio.h>

char name[] = "INDIA";


char *pstrcat(char *str1,char *str2)
{
	char *p = str1;
	while(*p != '\0')
		p++;
	while(*p++ = *str2++);

	return str1;

}

int main(void)
{
	pstrcat(name,"love");
	printf("The string is %s\n",name);
	return 0;
}
