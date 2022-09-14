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
        int a[n], m, o;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(i==0) m=a[i], o=i+1;
            if(a[i]>m) m=a[i], o=i+1;
        }
        cout<<o<<endl;
    }
}
