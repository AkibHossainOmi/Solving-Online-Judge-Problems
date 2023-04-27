#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define FastIO ios_base::sync_with_stdio(false), cin.tie(0)

int main()
{
    FastIO;
    ll t;
    cin>>t;
    while(t--)
    {
        ll n, m, x1, y1, x2, y2, c1=0, c2=0;
        cin>>n>>m>>x1>>y1>>x2>>y2;
        if(x1+1<=n) c1++;
        if(x1-1>=1) c1++;
        if(y1+1<=m) c1++;
        if(y1-1>=1) c1++;
        if(x2+1<=n) c2++;
        if(x2-1>=1) c2++;
        if(y2+1<=m) c2++;
        if(y2-1>=1) c2++;
        cout<<min(c1,c2)<<endl;
    }
}