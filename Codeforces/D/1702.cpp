#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        string str, output;
        cin>>str;
        ll p, cost=0, c[30]={};
        cin>>p;
        for(ll i=0;i<str.size();i++)
        {
            cost+=str[i]-96;
        }
        output=str;
        sort(str.begin(),str.end());
        for(int i=str.size()-1;i>=0;i--)
        {
            if(cost<=p) break;
            cost-=str[i]-96;
            c[str[i]-96]++;
        }
        for(int i=0;i<output.size();i++)
        {
            if(c[output[i]-96]==0) cout<<output[i];
            else c[output[i]-96]--;
        }
        cout<<endl;
    }
}
