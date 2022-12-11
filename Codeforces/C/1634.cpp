#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, k;
        cin>>n>>k;
        if((k==1&&n%2==1)||n%2==0) 
        {
            cout<<"YES\n";
            for(int i=1;i<=2;i++)
            {
                int c=0;
                for(int j=i;j<=n*k;j+=2)
                {
                    cout<<j<<" ";
                    c++;
                    if(c==k) 
                    {
                        c=0;
                        cout<<endl;
                    }
                }
            }
        }
        else cout<<"NO\n";
    }
}
