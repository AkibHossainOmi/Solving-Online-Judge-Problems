#include<bits/stdc++.h>
#include<stdio.h>
#include<math.h>
using namespace std;
int main()
{
    long long int t;
    scanf("%lld",&t);
    long long int i,j,n,r;
    for(i=0;i<t;i++)
    {
        scanf("%lld",&n);
        long long int a[n];
        r=0;
        for(j=0;j<n;j++)
        {
            scanf("%lld",&a[j]);
            r+=a[j];
        }
        if(r<=0||r<n)
        {
            printf("1\n");
        }
        else
        {
            printf("%lld\n",r-n);
        }
    }
    return 0;
}

