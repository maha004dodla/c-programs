/*by using space after scanf in another string reads the value of second string after pressing enter also*/
#include<stdio.h>
#include<string.h>
int main()
{
	char s1[1000];
	char s2[1000];
	scanf("%[^\n]s",&s1);
	scanf(" %[^\n]s",&s2);
	/*strcat(s1,s2);
	printf("%s",s1);  (or)*/
	int i,j,len=0;
	for(i=0; s1[i]!='\0'; i++)
	{
		len++;
	}
	j=len;
	for(i=0; s2[i]!='\0'; i++)
	{
		s1[j]=s2[i];
		j++;
	}
	printf("%s",s1);
	return 0;
}