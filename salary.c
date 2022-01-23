#include<stdio.h>
void main()
{
	float net_salary,pf,pt,IT,gs;
	printf("enter the values");
	scanf("%f %f %f %f",&gs,&pf,&pt,&IT);
	net_salary=(gs)-(pf+pt+IT);
	printf("%f",net_salary);
	
}