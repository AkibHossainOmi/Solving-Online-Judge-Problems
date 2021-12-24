#include<stdio.h>
int main()
{
    int n, x=0, y=0;
    scanf("%d",&n);
    int h[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&h[i]);
    }
    for(int i=0; i<n; i++)
    {
        if(h[x]>h[i])
        {
            x=i;
        }
        if(h[x]==h[i])
        {
            if(x<i)
            {
                x=i;
            }
        }
        if(h[y]<h[i])
        {
            y=i;
        }
        if(h[y]==h[i])
        {
            if(y>i)
            {
                y=i;
            }
        }
    }
    if(y>x) printf("%d\n",n-x+y-2);
    if(y<x) printf("%d\n",n-x+y-1);
}
