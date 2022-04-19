#include <stdio.h>
#include <stdlib.h>

struct student {
	char name[10];
	int age;
};

void display(char a[],int n)
{
	printf("Name %s\n",a);
	printf("Age  %d\n",n);
}

int main(void)
{
	struct student stu = {"name",31};

	display(stu.name,stu.age);

	return 0;
}
