#include<stdio.h>
int main()
{
	int l,b,h,w,r,choice;
	float area;
	while(1)
	{
		printf("input 1 for area of circle :\n");
		printf("input 2 for area of rectangle :\n");
		printf("input 3 for area of triangle :\n");
		printf("input 0 for exit :\n");
		printf("enter choice:");
		scanf("%d",&choice);
		if(choice==0)
		{
			break;
		}
		switch(choice)
		{
			case 1:
			printf("enter radius of the circle:");
			scanf("%d",&r);
			area=3.14*r*r;
			break;
			case 2:
			printf("enter length and width:");
			scanf("%d%d",&l,&w);
			area=l*w;
			break;
			case 3:
			printf("enter base and height:");
			scanf("%d%d",&b,&h);
			area=0.5*b*h;
			break;
		}
		printf("area is %.2f",area);
		return 0;
	}      
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}