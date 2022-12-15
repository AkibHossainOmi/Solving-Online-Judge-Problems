#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        char s1[102], s2[102];
        cin>>s1>>s2;
        int c[200]={}, x=0, y=0;
        for(int i=0;i<strlen(s1);i++)
        {
            c[s1[i]]++;
            if(c[s1[i]]==1) x++;
        }
        for(int i=0;i<strlen(s2);i++)
        {
            if(c[s2[i]]!=0) 
            {
                y++;
                break;
            }
        }
        if(y==1) cout<<"YES\n";
        else cout<<"NO\n";
    }
}
