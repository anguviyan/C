#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	FILE *ptr;
	char name[10];

	ptr = fopen("myfile.txt","w");

	if(ptr == NULL)
	{
		printf("There is no space in the memory\n");
		exit(1);
	}

	scanf("%s",name);
	fputs(name,ptr);	

	fclose(ptr);

	return 0;
}
