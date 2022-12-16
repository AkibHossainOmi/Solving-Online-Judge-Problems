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
        int a[n], x, b[n][2], j=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            x=log2(a[i]);
            x=pow(2,x);
            if(x<a[i]) x=x*2, b[j][0]=i+1, b[j][1]=x-a[i], j++;
            else if(x>a[i]) b[j][0]=i+1, b[j][1]=x-a[i], j++;
        }
        cout<<j<<endl;
        for(int i=0;i<j;i++)
            cout<<b[i][0]<<" "<<b[i][1]<<endl;
    }
}
