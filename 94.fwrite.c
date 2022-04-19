#include <stdio.h>
#include <stdlib.h>

int i;

struct student{
	char name[10];
	int age;
}stu;

int main(void)
{
	FILE *ptr = fopen("fwrite","wb");
	if(ptr == NULL)
	{
		printf("There is no space in the memory\n");
		exit(1);
	}
	
	for(i=0;i<2;i++)
	{
		printf("Enter the name: ");
		scanf("%s",stu.name);
		printf("Enter the age: ");
		scanf("%d",&stu.age);
		fwrite(&stu,sizeof(stu),1,ptr);
	}

	fclose(ptr);
	return 0;
}
