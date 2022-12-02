#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    int n, a, b;
    cin>>n>>a>>b;
    int s[n+2]={}, x[a+1], y[b+1];
    for(int i=0;i<a;i++)
    {
        cin>>x[i];
        s[x[i]]=1;
    }
    for(int i=0;i<b;i++)
    {
        cin>>y[i];
        if(s[y[i]]==0) s[y[i]]=2;
    }
    for(int i=1;i<=n;i++)
    {
        cout<<s[i]<<" ";
    }
    cout<<endl;
}
