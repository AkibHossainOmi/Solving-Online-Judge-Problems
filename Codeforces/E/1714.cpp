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
        
        int a[n], c=0;
        
        for(int i=0;i<n;i++)
        {
            cin>>a[i];

            if(a[i]%5==0)
            {
                if(a[i]%10==5) a[i]+=5;
                continue;
            }

            while(a[i]%10!=2)
            {
                a[i]+=a[i]%10;
            }

            //cout<<a[i]%20<<" ashche\n";
            a[i]=a[i]%20;

        }
        
        for(int i=0;i<n-1;i++)
        {
            if(a[i]!=a[i+1])
            {
                c=-1;
                break;
            }
        }
        
        if(c==-1) cout<< "No\n";
        else cout<< "Yes\n";
    }
    
    return 0;
}
