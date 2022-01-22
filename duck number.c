#include<stdio.h>
void main()
{
	int i,n,num,pro=1;
	scanf("%d",&n);
	for(i=0;n>0;i++)
	{
		i=n%10;
		n=n/10;
		pro=pro*i;
	}
	if(pro==0)
	{
		printf("duck number");
	}
	else
	{
		printf("not a duck number");
	}
}