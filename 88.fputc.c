#include <stdio.h>
#include <stdlib.h>

int ch;

int main(void)
{
	FILE *ptr;
	
	ptr = fopen("sriram.txt","r");
	if(ptr == NULL)
	{
		printf("There is no space in the memory\n");
		exit(1);
	}

	while((ch=fgetc(ptr)) != EOF)
		putchar(ch);	

	fclose(ptr);
	return 0;
}
