#include<stdio.h>
int main()
{
	int x,n,i,product=1;
	scanf("%d %d",&x,&n);
	for(i=1; i<=n; i++)
	{
		product=product * x;
	}
	printf("%d",product);
	return 0;
}