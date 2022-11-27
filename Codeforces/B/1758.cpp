#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int s=0, n, p=0;
        cin>>n;
        if(n%2!=0)
        {
            for(int i=1;i<=n;i++)
            {
                if(i<n) cout<<"1 ";
                else cout<<"1"<<endl;
            }
        }
        else
        {
            for(int i=1;i<=n;i++)
            {
                if(i==1) cout<<"1 ";
                else if(i==2) cout<<"3 ";
                else if(i<n) cout<<"2 ";
                else cout<<"2"<<endl;
            }
        }
            // // int s=1^2^2^3^3^3^4^4^4^5^5^5^5^5^5^5^5^5;
            // s=1^3^2^2^2^2;
            // // int p=(1+2+2+3+3+3+4+4+4+5+5+5+5+5+5+5+5+5)/18;
            // p=(1+3+2+2+2+2)/6;
            // cout<<s<<" "<<p<<endl;
    }
}
