#include<stdio.h>
int main()
{
	char ch;
	scanf("%c",&ch);
	if(ch>='A' && ch<'Z')
	{
		printf("it is upper case.\nlower case is: %c",(ch+32));
	}
	else
	{
		printf("it is lower case.\nupper case is: %c",(ch-32));
	}
	return 0;
}