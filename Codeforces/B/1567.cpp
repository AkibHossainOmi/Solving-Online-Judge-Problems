#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a, b, x;
        cin>>a>>b;

        if((a-1)%4==3) x=0;
        else if((a-1)%4==0) x=a-1;
        else if((a-1)%4==1) x=1;
        else x=a;

        if(x==b) cout<<a<<endl;
        else if((x^b)!=a) cout<<a+1<<endl;
        else cout<<a+2<<endl;
        
    }
}
