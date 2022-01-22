#include<stdio.h>
int main()
{
	char ch;
	scanf("%c",&ch);
	switch(ch)
	{
		case'v':
			printf("vowel");
			break;
		case'i':
			printf("indigo");
			break;
		case'b':
			printf("blue");
			break;
		case'g':
			printf("green");
			break;
		case'y':
			printf("yellow");
			break;
		case'o':
			printf("orange");
			break;
		case'r':
			printf("red");
			break;
		default:
			printf("invalid colour");
			break;
    }
    return 0;
}