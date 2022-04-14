#include<stdio.h>
void main()
{
	int a=10;
	char ch='Z';
	void *p,*q;
	p=&a;
	q=&ch;
	printf("%d\n",p);
	printf("%d\n",q);
	//type casting into appropriate pointer types before dereferencing//
    printf("%d\n",*(int *)p);
    printf("%c\n",*(char *)q);
}