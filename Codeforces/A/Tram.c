#include<stdio.h>
int main()
{
    int n,s;
    scanf("%d",&n);
    int i,a[n+1],b[n+1],x,y=0;
    for(i=0;i<n;i++)
    {
        scanf("%d %d",&a[i],&b[i]);
        if(i==0) x=b[i];
        if(i>0) x=x-a[i]+b[i];
        if(y<x)
        {
            y=x;
        }
    }
    printf("%d\n",y);

}
