#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, x, r=0;
        cin>>n;
        int a[n];
        x=n/2;
        for(int j=x; j>=1; j--)
        {
            for(int i=j; i<=n; i+=x)
            {
                a[r]=i, r++;
                cout<<a[r-1]<<" ";
            }
        }


        cout<<endl;
    }
}
