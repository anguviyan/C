#include <stdio.h>

int a = 10;
int *ptr;

int main(void)
{
	ptr = &a;

	printf("The Address of a is %p\n",ptr);

	ptr++;

	printf("The Address of a is %p\n",ptr);
	return 0;
}
