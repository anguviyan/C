#include <stdio.h>
#include <stdlib.h>

union student{
	//char name[8];
	int sno;
	int age;
};

char pstrcpy(char *dname,char *sname)
{
	while((*dname=*sname)!= '\0')
	{
		dname++;
		sname++;
	}

	return *dname;
}

int main(void)
{
	union student s1;

	s1.sno = 1;

	printf("%d\n",s1.age);

	printf("Size of the union is %ld\n",sizeof(s1));

	return 0;
}
