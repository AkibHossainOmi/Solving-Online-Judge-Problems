#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll health, attack, t, m, i, j;
    scanf("%lld",&t);
    for(i=0;i<t;i++)
    {
        scanf("%lld %lld %lld",&attack,&health,&m);
        ll ma[m+1], mh[m+1];
        for(j=0;j<m;j++)
        {
            scanf("%lld",&ma[j]);
        }
        for(j=0;j<m;j++)
        {
            scanf("%lld",&mh[j]);
            if(mh[j]%attack==0)
            {
                health-=ma[j]*(mh[j]/attack);
            }
            else
            {
                health-=ma[j]*(1+(mh[j]/attack));
            }
        }
        for(j=0;j<m;j++)
        {
            if(health+ma[j]>0)
            {
                printf("YES\n");
                break;
            }
            else if(j==m-1) printf("NO\n");
        }
    }
}
