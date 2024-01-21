#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define FastIO ios_base::sync_with_stdio(false), cin.tie(0)

int main()
{
    FastIO;
    ll t=1;
    //cin>>t;
    while(t--)
    {
        ll n, k, g, b;
        cin>>n>>k>>g>>b;
        string s;
        ll mxi, mni, c=0;
        char mx, mn;
        if(g>b) mx='G', mn='B', mxi=g, mni=b;
        else mx='B', mn='G', mxi=b, mni=g;
        while(mni)
        {
            s+=mx;
            s+=mn;
            mni--;
            mxi--;
            c++;
        }
        if(mxi>0) s+=mx, mxi--, c++;
        ll limit=ceil((double)mxi/c);
        if(mxi>0&&limit+1>k) cout<<"NO\n";
        else
        {
            for(ll i=0; i<s.size(); i++)
            {
                cout<<s[i];
                if(s[i]==mx&&mxi>0)
                {
                    for(ll j=0; j<k-1 && mxi>0; j++) 
                    {
                        cout<<mx;
                        mxi--;
                    }
                }
            }
            cout<<endl;
        }
    }
}