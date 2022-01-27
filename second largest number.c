#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a[n],i,max1,max2;
	for(i=0; i<n; i++)
	{
		scanf("%d",&a[i]);
	}
	max1=a[0];
	max2=a[1];
	if(a[0]<a[1])
	{
		max1=a[1];
		max2=a[0];
	}
	for(i=2; i<n; i++)
	{
		if(a[i]>max1)
		{
			max2=max1;
			max1=a[i];
		}
		else if(a[i]>max2 && a[i]<max1)
		{
			max2=a[i];
		}
	}
	printf("%d",max2);
	return 0;
}