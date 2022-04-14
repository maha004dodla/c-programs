#include<stdio.h>
int main()
{
	int n;
	printf("enter the size:");
	scanf("%d",&n);
	int arr[n],ecount=0,ocount=0,i;
	printf("enter the array elements:");
	for(i=0; i<n; i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("even elements are :");
	for(i=0; i<n; i++)
	{
		if(arr[i]%2==0)
		{
			ecount++;
			printf("%d ",arr[i]);
		}
	}
	printf("\nodd elements are :");
	for(i=0; i<n; i++)
	{
		if(arr[i]%2!=0)
		{
			ocount++;
			printf("%d ",arr[i]);
		}
	}
	printf("\neven count is : %d\n",ecount);
	printf("odd count is : %d\n",ocount);
	return 0;
}