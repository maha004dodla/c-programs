#include<stdio.h>
int is_prime(int n)
{
	if(n==1)
	{
		return 0;
	}
	int i;
	for(i=2; i*i<=n; i++)
	{
		if(n%i == 0)
		{
			return 0;
		}
	}
	return 1;
}
void primes_in_range(int a,int b)
{
	int i;
	for(i=a; i<=b; i++)
	{
		if(is_prime(i) == 1)
		{
			printf("%d ",i);
		}
	}
}
void composites_in_range(int a,int b)
{
	int i;
	for(i=a; i<=b; i++)
	{
		if(is_prime(i) == 0)
		{
			printf("%d ",i);
		}
	}
}
void main()
{
	int choice;
	printf("enter your choice\n");
	printf("1.check primality\n");
	printf("2. enter primes in ranges\n");
	printf("3.enter composites in ranges\n");
	scanf("%d",&choice);
	if(choice == 1)
	{
		int z;
		printf("enter a number to check primality :");
		scanf("%d",&z);
		if(is_prime(z) == 1)
		{
			printf("prime");
		}
		else
		{
			printf("not a prime");
		}
	}
	 else if(choice == 2)
	{
		int m,n;
		printf("enter the range:");
		scanf("%d%d",&m,&n);
		primes_in_range(m, n);
	}
	 else if(choice == 3)
	{
		int x,y;
		printf("enter the range:");
		scanf("%d%d",&x,&y);
		composites_in_range(x, y);
	}
	
}
