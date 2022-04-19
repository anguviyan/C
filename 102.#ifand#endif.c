#include <stdio.h>
#include <stdlib.h>

#define FLAG 0

int main(void)
{
#if FLAG == 1
	printf("Enter into the #if condition\n");
#endif
	printf("Program completed\n");

	return 0;
}
