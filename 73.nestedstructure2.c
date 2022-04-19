#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct birthday{
	int day;
	int month;
	int year;
};

struct student{
	char name[10];
	int rollno;
	struct birthday date;
};

int main(void)
{
	struct student stu;

	strcpy(stu.name,"sriram");
	stu.rollno = 100;
	stu.date.day = 01;
	stu.date.month = 01;
	stu.date.year = 2022;

	printf("Name of the student %s\n",stu.name);
	printf("Rollno of the student %d\n",stu.rollno);
	printf("Birth day of the student %d\n",stu.date.day);
	printf("Birth month of the student %d\n",stu.date.month);
	printf("Birth year of the student %d\n",stu.date.year);

	return 0;
}
