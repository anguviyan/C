#include <stdio.h>

int a = 1;

int fun(void)
{
	static int a = 2;
}

int main(void)
{
	a = 10;
	static int a = 1;
	fun();
	return 0;
}
