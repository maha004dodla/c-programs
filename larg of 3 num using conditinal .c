#include<stdio.h>
int main()
{
	int x,y,z;
	scanf("%d%d%d",&x,&y,&z);
	int max;
	if((max=x>y?x:y)>z?printf("%d",max):printf("%d",z));
}