#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student{
	char name[10];
	int rollno;
	int age;
};

int main(void)
{
	struct student stu1={"sriram",49,31};
	printf("Name of the student %s\n",stu1.name);
	printf("Rollno of the student %d\n",stu1.rollno);
	printf("Age of the student %d\n",stu1.age);
	return 0;
}
