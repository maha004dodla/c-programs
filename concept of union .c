#include<stdio.h>
struct str{
	int a;
	int b;
	char name[20];
};
union uni{
	int x;
	int y;
	char name[20];
};
void main()
{
	struct str s;
	union uni u;
	printf("size of structure is %d\n",sizeof(s));
	printf("size of union is %d\n",sizeof(u));
}