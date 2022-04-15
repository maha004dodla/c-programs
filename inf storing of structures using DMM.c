#include<stdio.h>
#include<stdlib.h>
struct course{
	int marks;
	char sub[30];
};
int main()
{
	struct course *s;
	int n,i;
	printf("enter no.of records :");
	scanf("%d",&n);
	s=(struct course*)malloc(n*sizeof(struct course));
	for(i=0; i<n; i++)
	{
		printf("enter subject and marks:");
		scanf("%s%d",&s[i].sub,&s[i].marks);
	}
	printf("Displaying information:\n");
	for(i=0; i<n; i++)
	{
		printf("%s\t%d\n",s[i].sub,s[i].marks);
	}
	free(s);
	return 0;
	
}