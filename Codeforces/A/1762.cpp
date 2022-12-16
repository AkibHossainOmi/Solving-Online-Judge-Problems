#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n+1], s=0, c[100+5]={}, i, r;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            s+=a[i];
        }
        while(s%2!=0)
        {
            for(i=0;i<n;i++)
            {
                r=a[i]/2;
                if(r%2!=0&&a[i]%2==0)
                {
                    s--;
                    c[i]++;
                    break;
                }
                else if(r%2==0&&a[i]%2!=0)
                {
                    s--;
                    c[i]++;
                    break;
                }
                else
                {
                    a[i]=r;
                    c[i]++;
                }
            }
        }
        cout<<c[i]<<endl;
    }
}
