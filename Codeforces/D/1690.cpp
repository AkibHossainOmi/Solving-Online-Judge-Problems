#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, k, B=0, W=0, mi;
        char L, R;
        cin>>n>>k;
        char s[n+1];
        cin>>s;
        for(int i=0;i<n;i++)
        {
            if(i<=k-1)
            {
                if(s[i]=='B') B++;
                else W++;
            }
            else 
            {
                R=s[i];
                if(L=='B') B--;
                if(R=='B') B++;
                if(L=='W') W--;
                if(R=='W') W++;
                L=s[i-(k-1)];
                mi=min(mi,W);
            }
            if(i==k-1) L=s[0], R=s[i], mi=W;
        }
        cout<<mi<<endl;
    }
}
