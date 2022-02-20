#include<stdio.h>
void main()
{
	char ch;
	printf("enter the character:");
	scanf("%c",&ch);
    if(ch>='a' && ch<='z')
    {
    	printf("%d",ch-96);
	}
	else if(ch>='A' && ch<='Z')
	{
		printf("%d",ch-64);
	}
	
}