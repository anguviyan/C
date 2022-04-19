#include <stdio.h>

#define ROW	2
#define COL	2

int a[ROW][COL];
int i,j,k;

int main(void)
{
	for(i=0;i<ROW;i++)
	{
		for(j=0;j<COL;j++)
		{
			printf("Enter the value of a[%d][%d] : ",i,j);
			scanf("%d",&a[i][j]);
		}
	}

	for(i=0;i<ROW;i++)
	{
		for(j=0;j<COL;j++)
		{
			printf("The value of a[%d][%d] is %d\n",i,j,a[i][j]);
		}
	}
	return 0;
}
