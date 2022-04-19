#include <stdio.h>

#define ARR	2
#define	ROW	2
#define	COL	2

int arr[ARR][ROW][COL];
int i,j,k;

int main(void)
{
	for(i=0;i<ARR;i++)
	{
		for(j=0;j<ROW;j++)
		{
			for(k=0;k<COL;k++)
			{
				printf("The value of arr[%d][%d][%d] is ",i,j,k);
				scanf("%d",&arr[i][j][k]);
			}
		}
	}

	for(i=0;i<ARR;i++)
	{
		for(j=0;j<ROW;j++)
		{
			for(k=0;k<COL;k++)
			{
				printf("The value of a[%d][%d][%d] is %d\n",i,j,k,arr[i][j][k]);
			}
		}
	}
	return 0;
}
