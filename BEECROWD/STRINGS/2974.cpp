#include<bits/stdc++.h>
using namespace std;
#define ll long long int

vector<string> a;

ll subString(string s)
{
    string c;
    ll x=0;
    for (ll len=s.size(); len>=1; len--)
    {
        for (ll i=0; i<=s.size()-len; i++)
        {
            ll j = i + len - 1;
            c=s.substr(i,j-i+1);
            a.push_back(c);
            x++;
        }
    }
    return x;
}

int match(string c, string d)
{
    if(c.find(d)!= string::npos) return 1;
    else return 0;
}

int main()
{
    ll t, m=0, i, j;

    cin>>t;

    ll n=t;
    vector<string> s;
    string p, c;

    while(n--)
    {
        cin>>p;
        s.push_back(p);
        if(m==0) m=p.size(), c=p;
        else if(p.size()<m) m=p.size(), c=p;
    }

    subString(c);

    for(i=0; i<a.size(); i++)
    {
        for(j=0;j<t;j++)
        {
            if(match(s[j],a[i])==0) 
            {
                break;
            }
        }
        if(j==t) break;
    }
    
    cout<<a[i]<<endl;
}
