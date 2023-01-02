#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll t;
    cin>>t;
    
    while(t--)
    {
        ll k, c[60]={}, n=0;
        cin>>k;
        string s, r;
        cin>>s;
        for (ll i=0; i<s.size(); i++)
        {
            if(s[i]=='1'||s[i]=='4'||s[i]=='6'||s[i]=='8'||s[i]=='9') 
            {
                r.push_back(s[i]);
                n=1;
                break;
            }
        }
        if(n==0)
        {
            for (ll i=0; i<s.size(); i++)
            {
                if(i>0&&(s[i]=='2'||s[i]=='5'))
                {
                    r.push_back(s[i-1]);
                    r.push_back(s[i]); 
                    n=2;
                    break;
                }
                else if((s[i]=='3'&&c['3']==1)||(s[i]=='7'&&c['7']==1))
                {
                    r.push_back(s[i]);
                    r.push_back(s[i]);
                    n=2;
                    break;
                }
                else if(s[i]=='7'&&c['2']==1)
                {
                    r.push_back('2');
                    r.push_back(s[i]);
                    n=2;
                    break;
                }
                else if(s[i]=='7'&&c['5']==1)
                {
                    r.push_back('5');
                    r.push_back(s[i]);
                    n=2;
                    break;
                }
                c[s[i]]=1;
            }
        }
        cout<<n<<endl<<r<<endl;  
    }
}
