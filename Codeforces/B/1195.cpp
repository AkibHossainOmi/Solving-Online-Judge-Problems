#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll n, k, s=0, o=0, e=0;
    cin>>n>>k;
    for(ll i=1;i<=n;i++)
    {
        s+=i;
        o++;
        if(s>=k) 
        {
            o+=s-k;
            if(o==n) 
            {
                e+=s-k;
                break;
            }
            else e+=s-k, s=s-(s-k);
        }
    }
    cout<<e<<endl;
}
