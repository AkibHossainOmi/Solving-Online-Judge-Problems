#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll t;
    cin>>t;

    while(t--)
    {
        string s;
        cin>>s;
        if(s[0]<=s[s.size()-1]) 
        {
            multimap<char,int> p;
            multimap<char,int>::iterator it;
            ll c=abs(s[0]-s[s.size()-1]), m=2;

            for(ll i=1;i<s.size()-1;i++)
            {
                if(s[0]>s[s.size()-1]&&s[i]<=s[0]&&s[i]>=s[s.size()-1]) 
                p.insert(pair<char, int>(s[i],i+1)), m++;
                else if(s[0]<=s[s.size()-1]&&s[i]>=s[0]&&s[i]<=s[s.size()-1])
                p.insert(pair<char, int>(s[i],i+1)), m++;
            }

            cout<<c<<" "<<m<<endl<<"1 ";
            for(it=p.begin();it!=p.end();it++)
            {
                cout<<it->second<<" ";
            }
            cout<<s.size()<<endl;
        }
        else 
        {
            multimap<char,int,greater<int>> p;
            multimap<char,int>::iterator it;
            ll c=abs(s[0]-s[s.size()-1]), m=2;

            for(ll i=1;i<s.size()-1;i++)
            {
                if(s[0]>s[s.size()-1]&&s[i]<=s[0]&&s[i]>=s[s.size()-1]) 
                p.insert(pair<char, int>(s[i],i+1)), m++;
                else if(s[0]<=s[s.size()-1]&&s[i]>=s[0]&&s[i]<=s[s.size()-1])
                p.insert(pair<char, int>(s[i],i+1)), m++;
            }

            cout<<c<<" "<<m<<endl<<"1 ";
            for(it=p.begin();it!=p.end();it++)
            {
                cout<<it->second<<" ";
            }
            cout<<s.size()<<endl;
        }
    }
}
