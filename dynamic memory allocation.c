#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n=5;
	int *arr;
	arr = (int *)malloc(n*sizeof(int));
	int i;
	printf("before initializing the array\n");
	for(i=0; i<n; i++)
	{
		printf("%d %d\n",arr+i,*(arr+i));
	}
	printf("enter array elements\n");
	for(i=0; i<n; i++)
	{
		scanf("%d",arr+i);
	}
	printf("array elements are\n");
	for(i=0; i<n; i++)
	{
		printf("%d %d\n",arr+i,*(arr+i));
	}
	
	free(arr);
	return 0;
	
}