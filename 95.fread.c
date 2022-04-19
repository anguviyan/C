#include <stdio.h>
#include <stdlib.h>

struct student {
	char name[10];
	int age;
}stu;

int main(void)
{
	FILE *ptr = fopen("fwrite","rb");
	if(ptr == NULL)
	{
		printf("There is no space in the memory\n");
		exit(1);
	}

	while(fread(&stu,sizeof(stu),1,ptr) == 1)
		printf("%s %d",stu.name,stu.age);

	fclose(ptr);
	return 0;
}
