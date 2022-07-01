#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t, n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n], b[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            b[i]=a[i];
        }
        if(n==1) 
        {
            cout<<"-1"<<endl;
            continue;
        }
        sort(a,a+n);
        for(int i=0;i<n;i++)
        {
            if(a[i]==b[i])
            {
                if(i==0)
                {
                    int x=a[i];
                    a[i]=a[i+1];
                    a[i+1]=x;
                    continue;
                }
                if(i==n-1)
                {
                    int x=a[i];
                    a[i]=a[i-1];
                    a[i-1]=x;
                    continue;
                }
                if(a[i]<a[i-1])
                {
                    int x=a[i];
                    a[i]=a[i-1];
                    a[i-1]=x;
                }
                else
                {
                    int x=a[i];
                    a[i]=a[i+1];
                    a[i+1]=x;
                }
            }
        }
        for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
        cout<<endl;
    }
    return 0;
}