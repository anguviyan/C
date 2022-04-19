#include <stdio.h>

char str[] = "sriram 31";
char name[20];
int age;

int main(void)
{
	sscanf(str,"%s %d",name,&age);
	printf("%s\n",name);
	printf("%d\n",age);
	return 0;
}
