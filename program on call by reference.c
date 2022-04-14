#include<stdio.h>
void swap(int *p,int *q)
{
	int t;
	t=*p;
	*p=*q;
	*q=t;
}
void main()
{
	int a=10,b=20;
	int *p,*q;
	p=&a;
	q=&b;
	printf("values of a and b before swapping is : %d %d\n",a,b);
	swap(p, q);
	// call by reference (or) pass by reference//
	printf("values of a and b after swapping is : %d %d\n",a,b);
}