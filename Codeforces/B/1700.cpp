#include<bits/stdc++.h>
using namespace std;
#define ll long long int

string s, r, c; //string, resulting string. create string
char ch;

void createstring()
{
    for(ll i=1; i<=s.size(); i++)
    {
        c.push_back(ch);
    }
}

void subtract()
{
    ll carry=0;
    for(ll i=s.size()-1; i>=0; i--)
    {
        if(carry==1) s[i]+=1;
        if((c[i]-48)-(s[i]-48)<0)
        {
            r.push_back(48+(c[i]-48)+10-(s[i]-48));
            carry=1;
        }
        else
        {
            r.push_back(48+(c[i]-48)-(s[i]-48));
            carry=0;
        }
    }
}

void addingzero()
{
    reverse(s.begin(),s.end());
    s.push_back('0');
    reverse(s.begin(),s.end());
}

void initial()
{
    if(s[0]=='9') ch='1', addingzero();
    else ch='9';
}

void removingzero()
{
    while(r.back()=='0') r.pop_back();
    reverse(r.begin(),r.end());
}

void clear()
{
    r.clear();
    c.clear();
}

void ans()
{
    createstring();
    subtract();
    removingzero();
    cout<<r<<endl;
    clear();
}

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        cin>>s;
        initial();
        ans();
    }
}