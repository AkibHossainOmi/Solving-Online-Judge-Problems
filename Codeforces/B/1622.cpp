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
        char s[n+1];
        int a[n], o[n], z[n], j=0, p[2*100005], k=0, x=n;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            p[a[i]]=i;
        }
        cin>>s;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='1') o[j]=a[i], j++;
            else z[k]=a[i], k++;
        }
        sort(o,o+j);
        sort(z,z+k);
        for(int i=j-1;i>=0;i--)
        {
            a[p[o[i]]]=x;
            x--;
        }
        for(int i=k-1;i>=0;i--)
        {
            a[p[z[i]]]=x;
            x--;
        }
        for(int i=0;i<n;i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
}
