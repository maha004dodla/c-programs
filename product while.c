#include<stdio.h>
void main()
{
	int i,n,product=1;
	scanf("%d %d",&i,&n);
	while(i<=n)
	{
		product*=i;
		i++;
	}
	printf("%d",product);
}