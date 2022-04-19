#include <stdio.h>
#include <stdlib.h>

struct student {
	char name[10];
	int age;
};

void display(struct student stu1)
{
	printf("Name = %s\n",stu1.name);
	printf("Age = %d\n",stu1.age);
}

int main(void)
{
	struct student stu = {"name",31};

	display(stu);

	return 0;
}
