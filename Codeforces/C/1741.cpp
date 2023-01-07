#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n, m, c, d=0, j, k=0, y;
        cin>>n;
        ll a[n], s[n]={}, sum[n], check;
        for(ll i=0; i<n;i++)
        {
            cin>>a[i];
            if(i>0) s[i]=s[i-1]+a[i];
            else s[i]=a[i];
        }

        for(ll i=0; i<n;i++)
        {
            if(s[n-1]%s[i]==0) sum[k]=s[i], k++;
        }

        for(j=0; j<k-1; j++)
        {
            m=0, y=0, c=0, check=0;
            for(ll i=0; i<n;i++)
            {
                m+=a[i], y++;
                if(m==sum[j]&&c==0) check+=m, c=y, m=0, y=0;
                else if(m==sum[j]) check+=m, c=max(c,y), m=0, y=0;
            }
            if(check==s[n-1])
            {
                if(d==0) d=c;
                else d=min(c,d);
            }
        }
        
        if(d==0) d=n;
        cout<<d<<endl;
    }
}
