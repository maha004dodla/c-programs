#include<stdio.h>
int main()
{
	int n;
    int i,p=0,n1=0,z=0;
    while(1)
    {
    	scanf("%d",&n);
	   {
	   	if(n==-1)
	   	{
	   		break;
		}
		else if(n>0)
		{
			p++;
		}
		else if(n<0)
		{
			n1++;
		}
		else if(n==0)
		{
			z++;
		}
	    }
	    i=i++;
	}
	printf("%d\n",p);
	printf("%d\n",n1);
	printf("%d",z);
}