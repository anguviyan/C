#include <stdio.h>
#include <stdlib.h>

int i;

struct student{
	char name[10];
	int age;
	int rollno;
}stu[2];

int main(void)
{
	for(i=0;i<2;i++)
	{
		printf("Enter the name of the student: ");
		scanf("%s",stu[i].name);
		printf("Enter the age of the student: ");
		scanf("%d",&stu[i].age);
		printf("Enter the rollno of the student: ");
		scanf("%d",&stu[i].rollno);
	}	
	for(i=0;i<2;i++)
	{
		printf("Name of the student[%d] is %s\n",i,stu[i].name);
		printf("Age of the student[%d] is %d\n",i,stu[i].age);
		printf("Rollno of the student[%d] is %d\n",i,stu[i].rollno);
	}

	return 0;
}
