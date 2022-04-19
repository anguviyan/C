#include <stdio.h>
#include <stdlib.h>

struct student {
	char name;
	int age;
	int rollno;
};

int main(void)
{
	struct student stu1;

	printf("The sizeof the structure is %ld\n",sizeof(stu1));
	return 0;
}
