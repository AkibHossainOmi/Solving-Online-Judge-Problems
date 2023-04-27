#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define FastIO ios_base::sync_with_stdio(false), cin.tie(0)
ll limit=200000, result[200001];
void calculate_result()
{
    for(ll i=0, j=0; i<=limit; i+=2, j++) result[i]=j*(j+1);
    for(ll i=1, j=1; i<=limit; i+=2, j++) result[i]=j*j;
}
int main()
{
    FastIO;
    calculate_result();
    ll t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        ll c=0, m=0, o=0;
        for(ll i=0; i<s.size(); i++)
        {
            
            if(s[i]=='1') c++, o++;
            else m=max(c,m), c=0;
        }
        if(o!=s.size())
        {
            c=0;
            for(ll i=0; i<s.size()&&s[i]=='1'; i++) c++;
            for(ll i=s.size()-1; i>=0&&s[i]=='1'; i--) c++;
            m=max(c,m);
            cout<<result[m]<<endl;
        }
        else 
        {
            m=s.size();
            cout<<m*m<<endl;
        }
    }
}