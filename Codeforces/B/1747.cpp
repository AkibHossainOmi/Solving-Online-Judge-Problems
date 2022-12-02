#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, i, j;
        cin>>n;
        if(n%2==0)
        {
            cout<<n/2<<endl;
            j=3*n, i=1;
            for(int k=1;k<=n/2;k++)
            {
                
                cout<<i<<" "<<j<<endl;
                i+=3;
                j-=3;
            }
        }
        else
        {
            cout<<n/2+1<<endl;
            j=3*n, i=1;
            for(int k=1;k<=n/2;k++)
            {
                cout<<i<<" "<<j<<endl;
                i+=3;
                j-=3;
            }
            cout<<i<<" "<<j<<endl;
        }
    }
}
