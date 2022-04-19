#include <stdio.h>
#include <stdlib.h>

#define SHOW(first,second)	first##second
#define BOM(second)	macro_##second

int main(void)
{
	int k2=10,k3=5;
	int macro_english=12,macro_tamil=15;

	printf("%d %d\n",SHOW(k,2),SHOW(k,3));
	printf("%d %d\n",BOM(english),BOM(tamil));

	return 0;
}
