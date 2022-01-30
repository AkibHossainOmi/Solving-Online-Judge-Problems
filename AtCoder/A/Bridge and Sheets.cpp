#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll n,l,w,c,d=0,x=0;
    scanf("%lld %lld %lld",&n,&l,&w);
    ll t[n+2],i;
    for(i=0;i<n;i++)
    {
        scanf("%lld",&t[i]);
        if(i==0)
        {
            if(t[i]!=0)
            {
                d=t[i];
                if(d%w!=0) x+=1+d/w;
                else x+=d/w;
            }
        }
        if(i>0)
        {
            if(t[i]-c>0)
            {
                d=t[i]-c;
                if(d%w!=0) x+=1+d/w;
                else x+=d/w;
            }
        }
        if(i==n-1)
        {
            if(l-(t[i]+w)>0)
            {
                d=l-(t[i]+w);
                if(d%w!=0) x+=1+d/w;
                else x+=d/w;
            }
        }
        c = t[i]+w;
    }
    printf("%lld\n",x);
    return 0;
}
