#include<stdio.h>
void main()
{
	int a,n;
	scanf("%d",&a);
	for(n=1;a>=n;n++)
		{
			if(a%n==0)
			{
				printf("%d ",n);
			}
		}
}