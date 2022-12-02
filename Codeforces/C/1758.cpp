#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, x;
        cin>>n>>x;
        int a[n], check=0;
        if(n%x==0) 
        {
            a[x-1]=n;
            a[0]=x, a[n-1]=1;

            for(int i=1;i<n-1;i++)
            {
                if(x!=i+1) a[i]=i+1;
            }
            
            for(int i=x;i<n-1;i++)
            {
                if(a[x-1]%a[i]==0&&a[i]%x==0)
                {
                    int temp=a[i];
                    a[i]=a[x-1];
                    a[x-1]=temp;
                    x=i+1;
                }
            }
        }
        else check=-1;
        
        if(check==-1)
        {
            cout<<"-1\n";
        }
        else
        for(int i=0;i<n;i++)
        {
            if(i<n-1) cout<<a[i]<<" ";
            else cout<<a[i]<<endl;
        }
    }
}
