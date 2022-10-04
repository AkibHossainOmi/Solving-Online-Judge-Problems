#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, j=0;
        cin>>n;
        char s[n+5], p[n+5]="";
        cin>>s;
        for(int i=0;i<strlen(s);i++)
        {
            if(s[i+2]=='0'&&(i+2)<strlen(s)&&s[i+3]!='0')
            {
                p[j]=(s[i]-48)*10+s[i+1]-48+96;
                cout<<p[j];
                i+=2;
                j++;
            }
            else 
            {
                p[j]=s[i]-48+96, 
                cout<<p[j];
                j++;
            }
        }
        cout<<endl;
    }
}
