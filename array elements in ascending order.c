#include<stdio.h>
int main()
{
	int n;
	printf("enter the size: ");
	scanf("%d",&n);
	int arr[n],i,j,k;
	printf("enter the array elements: ");
	for(i=0; i<n; i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0; i<n; i++)
	{
		for(j=i+1; j<n; j++)
		{
			if(arr[j]<arr[i])
			{
				k=arr[i];
				arr[i]=arr[j];
				arr[j]=k;
			}
		}
	}
	printf("elements in ascending order is :");
	for(i=0; i<n; i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}