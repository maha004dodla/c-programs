#include<stdio.h>
void increment(int a)
{
	a=a+1;
}
void main()
{
	int a=10;
	printf("value before increment : %d\n",a);
	increment(a);
	printf("value after increment : %d",a);
}