#include<stdio.h>
int main()
{
	int rs,cs;
	scanf("%d%d",&rs,&cs);
	int arr[rs][cs],i,j,n;
	for(i=0; i<rs; i++)
	{
		for(j=0; j<cs; j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	for(i=0; i<rs; i++)
	{
		for(j=0; j<cs; j++)
		{
			printf("number in [%d%d]=%d\n",i,j,arr[i][j]);
		}
	}
	
	return 0;
}