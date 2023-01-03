#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n, j=0;
        cin>>n;
        string s;
        char m[n+1][n+1];
        ll a[n];
        cin>>s;
        for(ll i=0;i<n;i++)
        {
            if(s[i]=='2') a[j]=i, j++;
            for(ll k=0;k<n;k++)
            {
                m[i][k]='.';
            }
        }
        if(j==1||j==2) cout<<"NO\n";
        else
        {
            cout<<"YES\n";
            for(ll i=0;i<j;i++)
            {
                if(i<j-1)
                {
                    m[a[i]][a[i+1]]='+';
                    m[a[i+1]][a[i]]='-';
                }
                else
                {
                    m[a[j-1]][a[0]]='+';
                    m[a[0]][a[j-1]]='-';
                }
            }
            for(ll i=0;i<n;i++)
            {
                for(j=0;j<n;j++)
                {
                    if(i==j) cout<<"X";
                    else if(m[i][j]=='+'||m[i][j]=='-') cout<<m[i][j];
                    else cout<<"=";
                }
                cout<<endl;
            }
        }
    }
}
