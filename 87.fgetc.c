#include <stdio.h>
#include <stdlib.h>

int ch;

int main(void)
{
	FILE *ptr;
	ptr=fopen("sriram.txt","w");
	if(ptr == NULL)
	{
		printf("There is no space in the memory\n");
		exit(1);
	}
	
	while((ch = getchar()) != '\n')
		fputc(ch,ptr);

	fclose(ptr);
	return 0;
}
