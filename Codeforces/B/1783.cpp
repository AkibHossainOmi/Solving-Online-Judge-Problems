#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n, i, j;
        cin>>n;
        ll a[n][n], x=n*n, c=0, y;
        for(i=0;i<n;i++)
        {
            if(i%2==0)
            {
                for(j=0;j<n;j++)
                {
                    if(i==0&&j==0) a[i][j]=1, y=1, x--;
                    else
                    {
                        if(c%2==1) a[i][j]=y+x, x--, y=a[i][j];
                        else a[i][j]=y-x, x--, y=a[i][j];
                    }
                    c++;
                }
            }
            else
            {
                for(j=n-1;j>=0;j--)
                {
                    if(c%2==1) a[i][j]=y+x, x--, y=a[i][j];
                    else a[i][j]=y-x, x--, y=a[i][j];
                    c++;
                }
            }
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }
    }
}
