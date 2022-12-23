#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        int a[4], r=0;
        for(int i=0;i<4;i++)
        {
            cin>>a[i];
        }
        if(a[0]<a[1]&&a[2]<a[3]) 
        {
            if(a[0]<a[2]&&a[1]<a[3]) r=1;
            else if(a[0]>a[2]&&a[1]>a[3]) r=1;
        }
        else if((a[0]>a[1]&&a[2]>a[3]))
        {
            if(a[0]<a[2]&&a[1]<a[3]) r=1;
            else if(a[0]>a[2]&&a[1]>a[3]) r=1;
        } 
        if(r==0) cout<<"NO\n";
        else cout<<"YES\n";
    }
}
