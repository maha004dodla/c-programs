#include<stdio.h>
void evens_in_range(int a,int b)
{
	int i;
	for(i=a; i<=b; i++)
	{
		if(i%2==0)
		{
			printf("%d ",i);
		}
	}
}
void main()
{
	evens_in_range(10,30);
}