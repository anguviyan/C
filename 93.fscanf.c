#include <stdio.h>
#include <stdlib.h>

struct student {
	char name[10];
	int age;
}stu;

int main(void)
{
	FILE *ptr = fopen("sriram.txt","r");
	if(ptr == NULL)
	{
		printf("There is no space in the memory\n");
		exit(1);
	}	

	while(fscanf(ptr,"%s %d",stu.name,&stu.age) != EOF)
		printf("%s %d\n",stu.name,stu.age);

	fclose(ptr);
	return 0;
}
