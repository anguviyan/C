#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student
{
	char name[10];
	int age;
};

int main(void)
{
	struct student stu,*ptr;

	ptr = &stu;

	strcpy(ptr->name,"sriram");
	ptr->age = 31;

	printf("Name of the student is %s\n",ptr->name);
	printf("Age of the student is %d\n",ptr->age);

	return 0;
}
