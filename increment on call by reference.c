#include<stdio.h>
void increment(int *p)
{
	*p=*p+1;
}
void main()
{
	int a=10;
	int *p;
	p=&a;
	printf("value before increment : %d\n",a);
	increment(p);
	printf("value after increment : %d",a);
}