#include<stdio.h>
#include<string.h>
int main()
{
	char s[100];
	scanf("%[^\n]s",&s);
	strupr(s);
	printf("%s",s);
	return 0;
}