#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n], x=0, y=0;
        for(int i=0;i<n;i++)
          cin>>a[i];
        for(int i=1;i<n-1;i++)
        {
            if(a[i]<a[i-1]&&x==0) x++;
            if(a[i]<a[i+1]&&x==1) 
            { 
                x++;
                break;
            }
        }
        if(x>1) cout<<"NO\n";
        else cout<<"YES\n";
    }
}
