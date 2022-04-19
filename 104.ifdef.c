#include <stdio.h>
#include <stdlib.h>

#define FLAG

int main(void)
{
#undef FLAG
#ifdef	FLAG
	printf("This is working in the program\n");
#endif
	return 0;
}
