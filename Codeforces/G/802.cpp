#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    char s[1005], g[6]="heidi";
    cin>>s;
    int j=0;
    for(int i=0;i<strlen(s);i++)
    {
        if(s[i]==g[j]) j++;
    }
    if(j==5) cout<<"YES\n";
    else cout<<"NO\n";
}
