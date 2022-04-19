#include <stdio.h>

int a = 10;
void *ptr;

int main(void)
{
	ptr = &a;
	printf("The value of a is %d\n",*(int *)ptr);
	return 0;
}
