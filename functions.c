#include<stdio.h>
float product(float a, float b)
{
	float c;
	c=a*b;
	return c;
}
void main()
{
	float x,y;
	scanf("%f%f",&x,&y);
	float prod;
	prod= product(x,y);
	printf("%.2f", prod);
}

