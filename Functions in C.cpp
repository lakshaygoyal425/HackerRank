#include<stdio.h>

int max(int a,int b,int c,int d)
{
    return ((a>b ? a:b) > (c>d ? c:d)) ? (a>b ? a:b) : (c>d ? c:d);
}

int main()
{
    int a,b,c,d;
    int ans;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    ans = max(a,b,c,d);
    printf("%d",ans);
}


