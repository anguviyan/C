#include <stdio.h>
#include <stdlib.h>

struct student {
	char name[10];
	int age;
};

void display(struct student *ptr)
{
	printf("Name %s\n",ptr->name);
	printf("Age %d\n",ptr->age);
}

void change(struct student *ptr)
{
	(ptr->age)++;
}

int main(void)
{
	struct student stu={"Name",31};

	change(&stu);

	display(&stu);
	return 0;
}
