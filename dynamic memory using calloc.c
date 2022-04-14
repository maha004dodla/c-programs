#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,n,*ptr;
	printf("enter the size:");
	scanf("%d",&n);
	ptr=(int*)calloc(n,sizeof(int));
	printf("enter the array elements:");
	for(i=0; i<n; i++)
	{
		scanf("%d",&ptr[i]);
	}
	printf("entered elements are:");
	for(i=0; i<n; i++)
	{
		printf("%d ",ptr[i]);
	}
}