#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c,d;
	float r1,r2;
	scanf("%d%d%d",&a,&b,&c);
	d=b*b*a*c;
	if(d==0)
	{
		printf("roots are equal\n");
		r1=-b/2*a;
		r2=-b/2*a;
		printf("root1:%.2f and root2:%.2f",r1,r2);
	}
	else if(d>0)
	{
		printf("roots are real\n");
		r1=(-b+sqrt(d))/2*a;
		r2=(-b-sqrt(d))/2*a;
		printf("root1:%.2f and root2:%.2f",r1,r2);
	}
	else
	{
		printf("roots are imaginary");
	}
}