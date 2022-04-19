#include <stdio.h>
#include <stdlib.h>

struct student{
	char name[10];
	int age;
};

void display(struct student ptu)
{
	printf("Name %s\n",ptu.name);
	printf("Age %d\n",ptu.age);
}

struct student change(struct student ptu)
{
	ptu.age= ptu.age+5;

	return ptu;
}

int main(void)
{
	struct student stu = {"Name",31},stu1;
	stu1 = change(stu);
	display(stu1);
	return 0;
}
