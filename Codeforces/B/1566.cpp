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
        ll c=0, d=0;
        cin>>s;
        if(s.find('0')==string::npos) cout<<"0\n";
        else if(s.find('1')==string::npos) cout<<"1\n";
        else
        {
            for(ll i=0; i<s.size(); i++)
            {
                if(s[i]=='0'&&c==0) c++;
                if(s[i]=='1'&&c==1&&d==0) d++;
                if(s[i]=='0'&&c==1&&d==1)
                {
                    c++;
                    break;
                }
            }
            if(c==2) cout<<"2\n";
            else cout<<"1\n";
        }
    }
}
