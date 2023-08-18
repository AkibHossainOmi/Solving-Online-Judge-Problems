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
        ll p, k, n1, nk;
        cin>>p>>k>>n1>>nk;
        ll got, needed;
        ll three=min(p/k,nk);
        ll one=min(n1,p-three);
        got=three*k+one;
        needed=p-got;
        if(needed<=0) cout<<"0\n";
        else 
        {
            ll threeF=needed/k, oneF=needed%k;
            if(k-oneF<=one&&oneF>0) threeF++, oneF=0;
            cout<<threeF+oneF<<endl;
        }
    }
}