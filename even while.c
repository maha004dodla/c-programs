#include<stdio.h>
void main()
{
	int i=1,n;
	scanf("%d",&n);
	while(i<=n)
	{
		i++;
		if(i%2==0)
		{
			printf("%d ",i);
		}
	}
}