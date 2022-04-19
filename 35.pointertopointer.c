#include <stdio.h>

int a = 10;
int *p;
int **ptr;

int main(void)
{
	p = &a;
	ptr = &p;

	printf("The value of a is %d\n",a);
	printf("The Address of a is %p\n",&a);

	printf("The value of p and address of a is %p\n",p);
	printf("The pointer of p and value of a is %d\n",*p);
	printf("The Address of p is %p\n",&p);

	printf("The Address of p and value of ptr is  %p\n",ptr);
	printf("The value of p and address of p is %p\n",*ptr);
	printf("The value of a is %d\n",**ptr);

	return 0;
}
