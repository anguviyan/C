#include <stdio.h>

int a = 10;
int *ptr;

int main(void)
{
	ptr = &a;

	printf("The Address of a is %p\n",&a);
	printf("The value of a is %d\n",*(&a));
	printf("\n");
	printf("The Address of ptr is %p\n",&ptr);
	printf("The value of ptr is %p\n",ptr);
	printf("The pointer of ptr is %d\n",*ptr);

	return 0;
}
