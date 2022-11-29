#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m, n, p, q, d;
        cin>>m>>n>>p>>q>>d;
        if((p-1<=d&&m-p<=d)||(q-1<=d&&n-q<=d)||(p-1<=d&&q-1<=d)||(m-p<=d&&n-q<=d)) cout<<"-1"<<endl;
        else cout<<m+n-2<<endl;
    }
}
