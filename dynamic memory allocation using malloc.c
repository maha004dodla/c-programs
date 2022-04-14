#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,i,*ptr,sum=0;
	printf("enter the size:");
	scanf("%d",&n);
	ptr=(int*)malloc(n*sizeof(int));
	printf("array elements are:");
	for(i=0; i<n; i++)
	{
		scanf("%d",ptr+i);
	}
	for(i=0; i<n; i++)
	{
		sum+= *(ptr+i);
	}
	printf("the sum of array elements is %d",sum);
	free(ptr);
	return 0;

}