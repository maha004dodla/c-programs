#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int arr[n],i,odd_sum=0,even_sum=0;
	for(i=0; i<n; i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0; i<=n; i++)
	{
		if(i%2==0)
		{
			even_sum=even_sum+i;
		}
		else
		{
			odd_sum=odd_sum+i;
		}
	}
	printf("odd sum :%d",odd_sum);
	printf("even sum :%d",even_sum);
	return 0;
	
}