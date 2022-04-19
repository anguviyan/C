#include <stdio.h>
#include <stdlib.h>

#define COMMENT

int main(void)
{
#ifndef COMMENT
	printf("This value is not shown in the program\n");
#endif
	return 0;
}
