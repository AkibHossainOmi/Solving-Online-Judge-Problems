#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define FastIO ios_base::sync_with_stdio(false), cin.tie(0)

int isSubstring(string s1, string s2)
{
    int M = s1.length();
    int N = s2.length();
    for (int i = 0; i <= N - M; i++) 
    {
        int j;
        for (j = 0; j < M; j++)
            if (s2[i + j] != s1[j])
                break;
 
        if (j == M)
            return i;
    }
 
    return -1;
}

int main()
{
    FastIO;
    ll t=1;
    cin>>t;
    while(t--)
    {
        ll a, b, f=0;
        cin>>a>>b;
        string x, y;
        cin>>x>>y;
        map<char,ll> presentx;
        for(ll i=0; i<x.size(); i++) presentx[x[i]]=1;
        for(ll i=0; i<y.size(); i++)
        {
            if(presentx[y[i]] == 0) 
            {
                
                f=1;
                break;
            }
        }
        if(f==1) cout<<"-1\n";
        else
        {
            ll c = 0;
            while(isSubstring(y,x)==-1&&x.length()<=1000) 
            {
                c++, x.append(x);
            }
            if(isSubstring(y,x)==-1) cout<<"-1\n";
            else cout<<c<<endl;
        }
    }
}