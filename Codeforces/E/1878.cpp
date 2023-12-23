#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define FastIO ios_base::sync_with_stdio(false), cin.tie(0)

int main()
{
    FastIO;

    ll t=1;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<ll> a(n);
        for(ll i=0; i<n; i++)
        {
            cin>>a[i];
        }
         //(num >> n) & 1
         vector<ll> prefix[32];
         for(ll i=0; i<32; i++)
         {
             prefix[i].push_back(0);
             for(ll j=0; j<n; j++)
             {
                 if((a[j]>>i)&1) prefix[i].push_back(prefix[i][j]+1);
                 else prefix[i].push_back(prefix[i][j]);
                 //cout<<prefix[i][j+1]<<" ";
             }
             //cout<<endl;
         }
         ll q;
         cin>>q;
         for(ll i=0; i<q; i++)
         {
             ll l, k;
             cin>>l>>k;
             ll L=l, R=n, M, res, number;
             if(a[l-1]<k) res=-1;
             else
             {
                 res=l;
                 while(L<=R)
                 {
                     M=(L+R)/2;
                     number=0;
                     for(ll j=0; j<32; j++)
                     {
                         if(prefix[j][M]-prefix[j][l-1]==M-l+1) number+=pow(2,j);
                     }
                     if(number>=k)
                     {
                         res=max(res,M);
                         L=M+1;
                     }
                     else
                     {
                         R=M-1;
                     }
                 }
             }
             cout<<res<<" ";
         }
         cout<<endl;
    }
}
