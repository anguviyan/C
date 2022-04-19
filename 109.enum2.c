#include <stdio.h>
#include <stdlib.h>

enum week{sun,mon,tue=6,wed,thu,fri,sat};

int main(void)
{
	enum week day;
	day = thu;

	printf("The day of the number is %d\n",day);
	return 0;
}
