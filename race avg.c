#include<stdio.h>
void main()
{
	int r1,r2,r3,r4,r5,avg;
	scanf("%d%d%d%d%d",&r1,&r2,&r3,&r4,&r5);
	avg=(r1+r2+r3+r4+r5)/5;
	printf("avg :%d\n",avg);
	if(r1>avg)
	{
		printf("%d ",r1);
	}
	if(r2>avg)
	{
		printf("%d ",r2);
	}
	if(r3>avg)
	{
		printf("%d ",r3);
	}
	if(r4>avg)
	{
		printf("%d ",r4);
	}
	if(r5>avg)
	{
		printf("%d ",r5);
	}
}