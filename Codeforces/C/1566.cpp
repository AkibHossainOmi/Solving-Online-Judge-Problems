#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, o=0;
        cin>>n;
        char s1[n+1], s2[n+1];
        cin>>s1>>s2;
        for(int i=0;i<n;i++)
        {
            if(s1[i]=='0'&&s2[i]=='0')
            {
                if(i+1<n&&s1[i+1]=='1'&&s2[i+1]=='1') o+=2, i++;
                else o+=1;
            }
            else if(s1[i]=='1'&&s2[i]=='1') 
            {
                if(s1[i+1]=='0'&&s2[i+1]=='0') o+=2, i++;
            }
            else o+=2;
        }
        cout<<o<<endl;
    }
    return 0;
}
