#include<stdio.h>
int array_elements_sum(int a[], int size)
{
	int i,sum=0; 
	for(i=0; i<size; i++)
	{
		sum=sum+a[i];
	}
	return sum;
}
void main()
{
	int n;
	scanf("%d",&n);
	int arr[n],i;
	for(i=0; i<n; i++)
	{
		scanf("%d",&arr[i]);
	}
	int res=array_elements_sum(arr ,n);
	printf("%d",res);
}