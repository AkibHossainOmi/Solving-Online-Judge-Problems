#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        char n[102];
        int s=0, e=0, z=0;
        cin>>n;
        for(int i=0;i<strlen(n);i++)
        {
            s+=n[i]-48;
            if((n[i]-48)%2==0) 
            {
                if(n[i]=='0'&&z==0) z=1;
                else e=1;
            }
        }
        if(s%3==0&&e==1&&z==1) cout<<"red\n";
        else cout<<"cyan\n";
    }
}
