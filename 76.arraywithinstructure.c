#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int i,j;

struct student {
	char name[10];
	int age;
	int mark[3];
};

int main(void)
{
	struct student stu[2];

	for(i=0;i<2;i++)
	{
		printf("The student[%d] is \n",i+1);
		printf("Name of the student is ");
		scanf("%s",stu[i].name);

		printf("Age of the student is ");
		scanf("%d",&stu[i].age);

		for(j=0;j<3;j++)
		{
			printf("Enter the mark of the student ");
			scanf("%d",&stu[i].mark[j]);
		}
	}

	for(i=0;i<2;i++)
	{
		printf("Name of the student is %s\n",stu[i].name);
	}
	return 0;
}
