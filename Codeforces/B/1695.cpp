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
        int a[n], m, l;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            if(i==0)
            {
                m=a[i];
                l=i+1;
            }
            if(m>a[i])
            {
                m=a[i];
                l=i+1;
            }
        }
        if(n%2!=0) cout<<"Mike"<<endl;
        else
        {
            if(l%2!=0) cout<<"Joe"<<endl;
            else cout<<"Mike"<<endl;
        }
    }
    return 0;
}
