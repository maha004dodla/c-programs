#include<stdio.h>
void change(int *arr)
{
	arr[0]=20;
	arr[1]=100;
}
void main()
{
	int arr[5]={34,55,45,6,10};
	printf("before change : %d\n",arr[0]);
	change(arr);
	printf("after change : %d",arr[0]);
	
}