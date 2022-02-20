#include<stdio.h>
int main()
{
	int x=20;
	// integer size of 4 bytes//
	int *p;
	p=&x;
	printf("%d\n",&x); //or//
	// "*" is called dereference operator or value of the operator //
	printf("%d\n",p);
	printf("%d",*p);
}