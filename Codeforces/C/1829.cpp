#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define FastIO ios_base::sync_with_stdio(false), cin.tie(0)

int main()
{
    FastIO;
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        string x;
        ll y, minm=-1, sk1=-1, sk2=-1;
        for(ll i=0; i<n; i++)
        {
            cin>>y>>x;
            if(x[0]=='0'&&x[1]=='0') continue;
            if(x[0]=='1'&&x[1]=='1') 
            {
                if(minm==-1) minm=y;
                else minm=min(y,minm);
                continue;
            }
            if(x[0]=='1') 
            {
                if(sk1==-1) sk1=y;
                else sk1=min(y,sk1);
            }
            if(x[1]=='1') 
            {
                if(sk2==-1) sk2=y;
                else sk2=min(y,sk2);
            }
            //cout<<sk1<<" "<<sk2<<endl;
        }
        if(sk2>=0&&sk1>=0&&minm>=0) minm=min(sk1+sk2, minm);
        else 
        {
            if(sk1>=0&&sk2>=0) minm=sk1+sk2;
        }
        cout<<minm<<endl;
    }
}