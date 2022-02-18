#include<stdio.h>
#include<string.h>
int main()
{
	char s1[100],s2[100];
	scanf("%[^\n]s",&s1);
	int i;
    /*strcpy(s2,s1);(or)*/
    for(i=0; s1[i]!='\0'; i++)
    {
        	s2[i]=s1[i];
	}
	printf("%s",s2);
	return 0; 
}