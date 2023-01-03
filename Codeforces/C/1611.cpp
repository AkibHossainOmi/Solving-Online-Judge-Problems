#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n, x, m;
        cin>>n;
        list<ll> a, b;
        list<ll>::iterator it;
        list<ll>::reverse_iterator ie;
        for(ll i=0;i<n;i++)
        {
            cin>>x;
            if(i==0) m=x;
            else if(m<x) m=x;
            a.push_back(x);
        }
        it=a.begin(), ie=a.rbegin();
        if(m!=*it&&m!=*ie) cout<<"-1\n";
        else
        {
            while(!a.empty())
            {
                if(*it<*ie) b.push_front(*it), a.pop_front(), it=a.begin(), ie=a.rbegin();
                else b.push_back(*ie), a.pop_back(), it=a.begin(), ie=a.rbegin();;
            }
            for(it=b.begin();it!=b.end();it++)
                cout<<*it<<" ";
            cout<<endl;
        }
    }
}
