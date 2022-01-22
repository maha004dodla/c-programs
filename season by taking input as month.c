#include<stdio.h>
int main()
{
	int m;
	scanf("%d",&m);
	switch(m)
	{
		case 3:
	    case 4:
	    case 5:
	    	printf("summer");
	    	break;
	    case 6:
	    case 7:
	    case 8:
	    case 9:
	    	printf("rainy");
	    	break;
	    case 10:
	    case 11:
	    case 12:
	    case 1:
	    case 2:
	    	printf("winter");
	    	break;
	    default:
	    	printf("invalid month number");
	    	break;
	}
	return 0;
}