#include<stdio.h>
void main()
{
	int n,r,sum=0;
	scanf("%d",&n);
	while(n>0)
	{
		r=n%10;
		printf("%d\n",r);//4 3
		n=n/10;
	    sum += r;
	}
	printf("sum:%d",sum);
}