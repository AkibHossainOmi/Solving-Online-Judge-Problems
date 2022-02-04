#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll x,y,t;
    scanf("%lld",&t);
    while(t!=0)
    {
        scanf("%lld %lld",&x,&y);
        if(y==x) printf("%lld\n",y*2-1);
        else printf("%lld\n",y*2+x-y);
        t--;
    }
}
