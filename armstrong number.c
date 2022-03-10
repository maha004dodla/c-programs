#include<stdio.h>
#include<math.h>
int main()
{
	int n,r=0,a,sum=0,count=0;
	scanf("%d",&n);
	a=n;
	while(a>0)
	{
		a=a/10;
		count++;
	}
	a=n;
	while(a>0)
	{
		r=a%10;
		a=a/10;
		sum=sum+pow(r,count);
	}
	if(n==sum)
	{
		printf("armstrong number");
	}
	else
	{
		printf("not an armstrong nummber");
	}
}