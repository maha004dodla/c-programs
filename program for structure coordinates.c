#include<stdio.h>
typedef struct student
{
	int pin;
	float perc;
}stu;
void main()
{
    stu s1,*s2;
	s2=&s1;
	s2->pin = 123;
	s2->perc = 80.00;
	printf("%d %.2f",s2->pin,s2->perc); 
}
/* typedef is used to give alias name for predefined or user defined names*/