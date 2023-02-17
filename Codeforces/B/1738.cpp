#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n, k;
        cin>>n>>k;
        ll a[k], b[n], copy[n], flag=0, avg, j=0, rem;
        for(ll i=0; i<k; i++)
        {
            cin>>a[i];
            if(i==0)
            {
                if(k!=n)
                {
                    avg=a[0]/(n-k+1);
                    rem=a[0]%(n-k+1);
                    if(a[0]%(n-k+1)==0)for(j=0; j<=n-k; j++) b[j]=avg;
                    else 
                    {
                        for(j=0; j<=n-k; j++) b[j]=avg;
                        for(j=0; j<abs(rem); j++) (rem<0)? b[j]-- : b[j]++;
                    }
                    j=n-k+1, sort(b,b+j);
                }
                else b[j]=a[i], j++;
            }
            else b[j]=a[i]-a[i-1], j++;
        }
        for(ll i=0; i<n; i++) copy[i]=b[i];
        sort(copy,copy+n);
        for(ll i=0; i<n; i++) if(b[i]!=copy[i]) flag=1;
        if(flag==0||k==1) cout<<"Yes\n";
        else cout<<"No\n";
    }
}
