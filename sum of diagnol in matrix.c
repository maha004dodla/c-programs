#include<stdio.h>
#include<math.h>
int main()
{
	int r,c;
	scanf("%d%d",&r,&c);
	int mat[r][c];
	int i,j;
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			scanf("%d",&mat[i][j]);
		}
	}
	int ps=0,ss=0; 
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			if(i==j)
			{
				ps=ps+mat[i][j];
			}
			if(i+j==r-1)
			{
				ss=ss+mat[i][j];
			}
		}
    }
		printf("%d",abs(ps-ss));
	return 0;

}