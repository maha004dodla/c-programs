#include<stdio.h>
int main()
{
	int a,b,i,j,count=0,c=0;
	scanf("%d%d",&a,&b);
	for(j=a; j<=b; j++)
	{
		count = 0;
		for(i=2; i*i<j; i++)
		{
			if(j%i==0)
			count++;
		}
		if(count==0)
     	printf("%d ",j);
    }
	return 0;
}
