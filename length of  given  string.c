#include<stdio.h>
#include<string.h>
int main()
{
	char s[10];
	scanf("%[^\n]s",&s);
	int len=0,i;
	/*len=strlen(s);*/
	for(i=0; s[i]!='\0'; i++)
	{
		len++;
	}
	printf("%d",len);
	return 0;
}