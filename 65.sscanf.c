#include <stdio.h>

int main(void)
{
	char name[10]="Hello";
	char name1;
	sscanf(name,"%s",&name1);
	printf("String is %s\n",(char *)name1);
	return 0;
}
