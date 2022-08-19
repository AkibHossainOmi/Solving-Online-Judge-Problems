#include <bits/stdc++.h>
using namespace std;

int main()
{
    char s[2*100000+5];
    int t, a[200];
    cin>>t;
    while(t--)
    {
        for(int j=97;j<=122;j++)
            a[j]=0;
        cin>>s;
        int l=strlen(s), c=0, d=0;
        for(int i=0;i<l;i++)
        {
            if(a[s[i]]==0)
            {
                a[s[i]]++;

                c++;
            }
            if(c==4)
            {
                for(int j=97;j<=122;j++)
                    a[j]=0;
                a[s[i]]=1;
                c=1;
                d++;
            }
        }
        if(c>0) d++;
        cout<<d<<endl;
    }
    return 0;
}
