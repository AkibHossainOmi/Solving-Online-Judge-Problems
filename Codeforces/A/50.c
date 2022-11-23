#include<stdio.h>
int main()
{
    int a,b,c,i,j,r=0;
    scanf("%d%d",&a,&b);
    if(a%2!=0&&b%2!=0)
    {
        if(((a-1)/2)*b>(b/2)*(a-1)) printf("%d",((a-1)/2)*b+b/2);
        else printf("%d",((b-1)/2)*a+a/2);
    }
    else
    {
        if((a/2)*b>(b/2)*a) printf("%d",(a/2)*b);
        else printf("%d",(b/2)*a);

    }
}
