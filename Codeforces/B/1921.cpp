#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define FastIO ios_base::sync_with_stdio(false), cin.tie(0)

int main()
{
    FastIO;
    ll t=1;
    cin>>t;
    while(t--)
    {
        ll n, res;
        string s1, s2;
        cin>>n>>s1>>s2;
        ll sum1=0, sum2=0, inPlace=0;
        for(int i=0; i<n; i++)
        {
            sum1+=s1[i]-'0', sum2+=s2[i]-'0';
            if(s1[i]==s2[i]&&s1[i]=='1') inPlace++;
        }
        ll notInPlace=min(sum1,sum2)-inPlace;
        res=notInPlace+abs(sum2-sum1);
        cout<<res<<endl;
    }
}