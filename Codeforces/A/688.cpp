#include <bits/stdc++.h>
using namespace std;
#define long long int ll
int check(char a[])
{
    int i;
    for(i=0;i<strlen(a);i++)
    {
        if(a[i]=='0'||i==strlen(a)-1)
        {
            break;
        }
    }
    if(a[i]!='0') return 0;
    else return 1;
}
int main()
{
    int n, d, m=0, w=0;
    cin>>n>>d;
    char a[n+5];
    for(int i=0;i<d;i++)
    {
        cin>>a;
        if(check(a)==0) w=0;
        else w++;
        m=max(m,w);
    }
    cout<<m<<endl;
    return 0;
}
