#include <stdio.h>
#include <stdlib.h>

#define SHOW(x,format) printf(#x"=%"#format"\n",x)

int main(void)
{
	int a = 10;
	SHOW(a,d);
	return 0;
}
