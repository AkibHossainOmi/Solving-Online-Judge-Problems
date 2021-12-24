#include<iostream>
#include<algorithm>
#include<bits/stdc++.h>
#include<stdio.h>
#include<math.h>
using namespace std;
int main()
{
    int t,m=0,r,s=0,x,y,z,q;
    scanf("%d",&t);
    int i,n,j;
    for(i=0;i<t;i++)
    {
        x=0,y=0,z=0,m=0,s=0,r=0,q=0;
        scanf("%d",&n);
        int a[n+1];
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[j]);
            if(j==0)
            {
                r=a[0];
                x=a[0];
            }

            if(a[j]>r)
            {
                r=a[j];
                s=j;
            }
            if(a[j]<x)
            {
                x=a[j];
                m=j;
            }
        }
        if(s>m)
        {
            x=s+1;
            y=n-m;
            z=m+1+n-s;
        }
        else
        {
            x=m+1;
            y=n-s;
            z=s+1+n-m;
        }
        q=min(x,y);
        printf("%d\n",min(q,z));
    }
    return 0;
}
