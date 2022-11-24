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
        int a[n], r=0, s=0, b[n]={0};
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]==0) 
            {
                b[i]=-1;
                if(b[i-1]==0&&i>0) r++;
                s++;
                //cout<<b[i]<<endl;
            }
            else 
            {
                if(r==1) r++;
            }
            //cout<<b[i]<<endl;
        }
        if(r>1) cout<<"2"<<endl;
        else if(s==n) cout<<"0"<<endl;
        else cout<<"1"<<endl;
    }
    return 0;
}
