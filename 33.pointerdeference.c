#include <stdio.h>
int a = 10;
int *ptr;
int main(void)
{
	ptr = &a;
	printf("The value of a is %d\n",*ptr);

	*ptr = 11;
	printf("The value of a is %d\n",*ptr);
	return 0;
}
