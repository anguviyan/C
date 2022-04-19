#include <stdio.h>
#include <stdlib.h>

void func(void)
{
	int a = 10;
 	static int b = 10;

	printf("The value of a is %d\n",a);
	printf("The value of b is %d\n",b);

	a++;
	b++;
}

int main(void)
{
	func();
	func();
	func();
	return 0;
}
