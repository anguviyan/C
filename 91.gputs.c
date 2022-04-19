#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	FILE *ptr;

	char name[20];

	ptr = fopen("myfile.txt","r");
	if(ptr == NULL)
	{
		printf("There is no space in the memory\n");
		exit(1);
	}

	while(fgets(name,80,ptr) != NULL)
		printf("%s",name);
	fclose(ptr);

	return 0;
}
