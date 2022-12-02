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
        int a[n], c=0, o, b[101]={};
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            b[a[i]]++;
            if(b[a[i]]==1) c++;
        }
        if(c>2) o=n;
        else o=n/2+1;
        cout<<o<<endl;
    }
}
