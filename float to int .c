/*when a float value is converted to an int value,the fractional part is truncated
when a double value is converted to an float value,rounding of digits is done
when a long int is converted to an int,the excess higher order bits are dropped*/
#include<stdio.h>
int main()
{
    int i;
    float f;
    scanf("%f",&f);
    i=(int)f;
    printf("%d",i);
    return 0;
    
		
}