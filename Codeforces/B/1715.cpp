#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n, k, b, s;
        cin>>n>>k>>b>>s;
        ll maxb=s/k, minb=(s-(k-1)*(n-1))/k;
        if(b>maxb||b<minb) cout<<"-1\n";
        else
        {
            for(ll i=1;i<=n;i++)
            {
                if(i==1) 
                {
                    if((k*(b+1))-1<=s) 
                    {
                        cout<<(k*(b+1))-1<<" ";
                        s-=((k*(b+1))-1);
                    }
                    else 
                    {
                        cout<<s<<" ";
                        s=0;
                    }
                }
                else if(s>=k-1) 
                {
                    cout<<k-1<<" ";
                    s-=(k-1);
                }
                else if(s>0) 
                {
                    cout<<s<<" ";
                    s=0;
                }
                else cout<<"0 ";
            }
            cout<<endl;
        }
    }
}
