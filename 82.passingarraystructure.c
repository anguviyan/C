#include <stdio.h>
#include <stdlib.h>

struct student {
	char name[10];
	int age;
};

void display(struct student stu[])
{
	int i;
	for(i=0;i<2;i++)
	{
		printf("Name of the student %s\n",stu[i].name);
		printf("Age of the student %d\n",stu[i].age);
	}
}

void inc_age(struct student stu[])
{
	int i;
	for(i=0;i<2;i++)
	{
		stu[i].age = stu[i].age + 5;
	}
}

int main(void)
{
	struct student stu[2] = {
		{"name",31},
		{"same",21}
	};

	inc_age(stu);
	display(stu);

	return 0;
}
