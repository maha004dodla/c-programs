#include<stdio.h>
void main()
{
   int num;
   printf("enter num");
   scanf("%d",&num);
   if(num%1==0)
   {
   	printf("divisible by 1\n");
   }
   if(num%2==0)
   {
   	printf("divisible by 2\n");
   }
    if(num%4==0)
   {
   	printf("divisible by 4");
   }
   if(num%9==0)
   {
   	printf(" divisible by 9");
   }
} 
