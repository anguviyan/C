#include <stdio.h>

char name[10];

struct student {
	char name[10];
	int rollno;
	int age;
}stu1={"sriram",100,31};

char pstrcpy(char *ptr,char *str)
{
	while((*ptr=*str) != '\0')
	{
		ptr++;
		str++;
	}
	return *ptr;
}

int main(void)
{
	struct student stu2={"Angusamy",101,21};
	struct student stu3,stu4;

	pstrcpy(stu3.name,"viyan");
	stu3.rollno = 103;
	stu3.age = 1;

	printf("Enter the name of the student4: ");
	scanf("%s",stu4.name);
	printf("Enter the rollno of the student4: ");
	scanf("%d",&stu4.rollno);
	printf("Enter the age of the student4: ");
	scanf("%d",&stu4.age);

	printf("Name of the student1: %s\n",stu1.name);
	printf("Rollno of the student1: %d\n",stu1.rollno);
	printf("Age of the student1: %d\n",stu1.age);
	printf("Name of the student2: %s\n",stu2.name);
	printf("Rollno of the student2: %d\n",stu2.rollno);
	printf("Age of the student2: %d\n",stu2.age);
	printf("Name of the student3: %s\n",stu3.name);
	printf("Rollno of the student3: %d\n",stu3.rollno);
	printf("Age of the student3: %d\n",stu3.age);
	printf("Name of the student4: %s\n",stu4.name);
	printf("Rollno of the student4: %d\n",stu4.rollno);
	printf("Age of the student4: %d\n",stu4.age);

	return 0;
}
