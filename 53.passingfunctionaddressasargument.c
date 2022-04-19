#include <stdio.h>

void func(char,void (*ptr)(float));
void func1(float);

int main(void)
{
	printf("main() function is called\n");
	func('a',func1);
	return 0;
}

void func(char b,void (*ptr)(float))
{
	printf("func() function is called\n");
	(*ptr)(8.5);
}

void func1(float c)
{
	printf("func1() function is called\n");
}
