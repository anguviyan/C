#include <stdio.h>
#include <stdlib.h>

int ch;

int main(void)
{
	FILE *ptr,*str;

	ptr = fopen("sriram.txt","r");
	if(ptr == NULL)
	{
		printf("There is no space in the memory\n");
		exit(1);
	}

	str = fopen("copy.txt","w");
	if(str == NULL)
	{
		printf("There is no space in the memory\n");
		exit(1);
	}

	while((ch = fgetc(ptr)) != EOF)
		fputc(ch,str);

	fclose(ptr);
	fclose(str);

	return 0;
}
