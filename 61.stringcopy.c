#include <stdio.h>

char name1[10];

char *pstrcpy(char *str1,char *str2)
{
	while((*str1=*str2)!='\0')
	{
		str1++;
		str2++;
	}
	return str1;
}

int main(void)
{
	pstrcpy(name1,"sriram");
	printf("string is %s\n",name1);
	return 0;
}
