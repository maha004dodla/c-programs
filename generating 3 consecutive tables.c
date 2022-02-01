#include<stdio.h>
int main()
{
	int num,a,i,tab;
	scanf("%d %d",&num,&a);
	for(i=0; i<=a; i++)
	{
		tab=num*i;
	printf("%d x %d = %d\t",num,i,tab);
	printf("%d x %d = %d\t",num+1,i,tab+1);
	printf("%d x %d = %d\n",num+2,i, tab+2);
    }
	return 0;
}