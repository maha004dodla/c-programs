#include<stdio.h>
int main()
{
	int n;
	printf("enter size:");
	scanf("%d",&n);
	int arr[n],i,j,count=0,flag=0;
	printf("enter array elements:");
	for(i=0; i<n; i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("unique elements are:");
	for(i=0; i<n; i++)
	{
		count=0;
		for(j=0; j<n; j++)
		{
			if(arr[i]==arr[j])
			{
				count++;
			}
		}
		if(count==1)
		{
			flag=1;
			printf("%d ",arr[i]);
		}
	}
		if(flag==0)
		{
			printf("no unique elements:");
		}

	return 0;
}