#include<stdio.h>
int main()
{
    int x,y,m,mod,i,pro=1;
    scanf("%d%d%d",&x,&y,&m);
    for(i=1; i<=y; i++)
    {
        pro=pro*x;
        mod=pro%m;
    }
    printf("%d",mod);
    return 0;
}