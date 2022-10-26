#include <bits/stdc++.h>
using namespace std;



int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, k, sum=0;
        cin>>n>>k;
        int a[2000]= {};
        int x=0;
        for(int i=k; i>k/2; i--)
        {
            if(k>n) break;
            if(i!=k) a[k-i]=-1, x++;
            else a[k]=-1, x++;
            
        }
        x=n-x;
        cout<<x<<endl;
        for(int i=1; i<=n; i++)
        {
            if(a[i]==0&&x==1) cout<<i<<endl;
            else if(a[i]==0) cout<<i<<" ";
            if(a[i]==0) x--;
        }
    }
}
