#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t;
    scanf("%lld",&t);
    long long int p, c;
    while(t--)
    {
        scanf("%lld %lld",&p, &c);
        long long int n[p+10], sum=0;
        for(long long int i=0; i<p; i++)
        {
            scanf("%lld",&n[i]);
            sum+=1+n[i];
        }
        sort(n,n+p);
        if(sum+n[p-1]-n[0]<=c) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
