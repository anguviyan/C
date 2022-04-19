#include <stdio.h>

#define FLAG 2

int main(void)
{
#if FLAG == 1
	printf("The value is accepted\n");
#elif FLAG == 2
	printf("The value 2 is accepted\n");
#elif FLAG == 3
	printf("The value 3 is accepted\n");
#endif
	printf("program is completed\n");

	return 0;
}
