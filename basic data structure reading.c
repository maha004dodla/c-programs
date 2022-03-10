#include<stdio.h>
#include<string.h>
struct student
{
	int pin;
	char name[20];
	float perc;
};
void main()
{
	struct student s1;
	printf("enter student pin:");
	scanf("%d",&s1.pin);
	printf("\nenter student name:");
	scanf("%s",s1.name);
	printf("\nenter student percentage:");
	scanf("%f",&s1.perc);
	
	printf("student details\n");
	printf("PIN\t\tNAME\t\tPERCENTAGE\n");
	printf("----------------------------------\n");
	printf("%d\t\t%s\t\t%.2f", s1.pin,s1.name,s1.perc);
	
}