#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n, m, c1=0, c2=0, f=0;
        cin>>n>>m;
        string t1, t2;
        cin>>t1>>t2;
        for(ll i=1; i<n; i++)
        {
            if(t1[i]==t1[i-1]) c1++;
            if(c1==2) break;
        }
        for(ll i=1; i<m; i++)
        {
            if(t2[i]==t2[i-1]) c2++;
            if(c2==2) break;
        }
        if(c1==2||(c1==1&&c2==1)||c2==2) 
        {
            f=1;
        }
        else
        {
            if((c1==1&&c2==0)||(c1==0&&c2==1))
            {
                if(t1[n-1]==t2[m-1]) f=1;
            }
        }
        if(f==0) cout<<"YES\n";
        else cout<<"NO\n";
    }
}
