#include<stdio.h>
int main()
{
	int i,n,arr[20],sum=0;
	int *pn=&n,*psum=&sum;
	float mean=0.0,*pmean=&mean;
	printf("enter no.of elements:");
	scanf("%d",pn);
	printf("enter the elements:");
	for(i=0; i<*pn; i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0; i<*pn; i++)
	{
		*psum=*psum + arr[i];
		*pmean=(float)*psum / *pn;
	}
	printf("numbers you entered are:\n");
	for(i=0; i<*pn; i++)
	{
		printf("%d\n", arr[i]);
	}
	printf("sum is : %d\n", *psum);
	printf("mean is : %.2f", *pmean);
	return 0;	
}