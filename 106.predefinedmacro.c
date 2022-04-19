#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	printf("The Date is %s\n",__DATE__);
	printf("The Time is %s\n",__TIME__);
	printf("The File is %s\n",__FILE__);
	printf("The Line is %d\n",__LINE__);
	return 0;
}
