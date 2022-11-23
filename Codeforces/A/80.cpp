#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int a[55]={};
int sieve(int prime)
{
    a[1]=1;
    for(int i=2;i<=50;i++)
    {
        if(a[i]==1) continue;
        if(i>prime) return i;
        for(int j=i+i;j<=50;j+=i)
        {
            a[j]=1;
        }
    }
    return 0;
}

int main()
{
    int n,m;
    cin>>n>>m;
    if(sieve(n)==m) cout<<"YES\n";
    else cout<<"NO\n";
    return 0;
}

