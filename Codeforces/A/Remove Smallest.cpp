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
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        for(int i=0; i<n; i++)
        {
            if(i>0&&a[i]-a[i-1]>1) 
            {
                c++;
                break;
            }
        }
        if(c==0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
