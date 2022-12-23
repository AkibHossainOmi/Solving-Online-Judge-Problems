#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        int k, n, j=0, i, p=1;
        cin>>k>>n;
        int a[k];
        for(i=1;i<=n;i++)
        {
            p+=j;
            a[j]=p;
            if(n-a[j]<k-(j+1)||j==k) break;
            cout<<a[j]<<" ";
            j++;
        }
        for(int i=a[j-1]+1;i<=n;i++)
        {
            if(j==k) break;
            a[j]=i;
            cout<<a[j]<<" ";
            j++;
        }
        cout<<endl;
    }
}
