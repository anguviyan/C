#include <stdio.h>
#include <stdlib.h>

#pragma startup func1() //i.e before main() function.
#pragma exit func1()    //i.e after main() function.

void __attribute__((constructor)) func1(void) //executes the same function at the startup of the program
{
	printf("Func1 () is called\n");
}

void __attribute__((destructor)) func2(void) //executes the same function just before the program terminates through _exit
{
	printf("Func2() is called\n");
}

int main(void)
{
	printf("The main() is called\n");
	return 0;
}
