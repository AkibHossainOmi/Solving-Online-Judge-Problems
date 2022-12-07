#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a[n], x=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]>0) 
            {
                if(x!=0) a[i]+=a[x-1], a[x-1]=0;;
                x=i+1;
            }
            if(a[i]<0&&x!=0)
            {
                a[i]+=a[x-1];
                a[x-1]=0;
                if(a[i]>0) 
                {
                    x=i+1;
                }
            }
        }
        x=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]>0) x+=a[i];
        }
        cout<<x<<endl;
    }
}
