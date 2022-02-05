#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t;
    scanf("%lld",&t);
    long long int i,j,D,d,p,q,m,n,r;
    for(i=0;i<t;i++)
    {
        scanf("%lld %lld %lld %lld",&D,&d,&p,&q);
        n=D/d-1;
        m=(q*d*(n*(n+1))/2)+(q*(D%d)*(D/d));
        printf("%lld\n",m+D*p);
    }
    return 0;
}
