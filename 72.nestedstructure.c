#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student{
	char name[10];
	int rollno;
	struct date{
		int day;
		int month;
		int year;
	}birthday;
};

int main(void)
{
	struct student stu;

	strcpy(stu.name,"sriram");
	stu.rollno = 100;
	stu.birthday.day = 01;
	stu.birthday.month = 01;
	stu.birthday.year = 2022;

	printf("Name of the student is %s\n",stu.name);
	printf("Rollno of the student is %d\n",stu.rollno);
	printf("Birth day of the student is %d\n",stu.birthday.day);
	printf("Birth month of the student is %d\n",stu.birthday.month);
	printf("Birth year of the student is %d\n",stu.birthday.year);

	return 0;
}
