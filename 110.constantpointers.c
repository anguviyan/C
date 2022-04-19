#include <stdio.h>

int a=10,b = 20;
const int c = 30,d = 40;

int main(void)
{
	/*Normal variable to  Normal pointer*/
	int *p = &a;
	*p = 11;
	printf("The value of p is %d\n",*p);
	p = &b;
	printf("The value of p is %d\n",*p);

	/*Constant pointer to Normal variable*/
	int *const q = &a;
	*q = 12;
        printf("The value of p is %d\n",*q);
	q = &b;
	printf("The value of p is %d\n",*q);

	/*Normal pointer to constant variable*/
	const int *ptr = &c;
	*ptr = 13;
	printf("The value of ptr is %d\n",*ptr);

	ptr = &b;
	printf("The value of ptr is %d\n",*ptr);


	return 0;
}
