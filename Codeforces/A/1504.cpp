#include <bits/stdc++.h>
using namespace std;

int ispalindrome(char a[])
{
    char s[900005]="";
    for(int i=strlen(a)-1; i>=0; i--)
        s[strlen(a)-i-1]=a[i];
    if(strcmp(a,s)==0) return 1;
    else return 0;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        char s[900005]="", p[900005]="a";
        cin>>s;
        strcat(p,s);
        strcat(s,"a");
        //cout<<s<<endl<<p<<endl;
        if(ispalindrome(s)==0)  								
        cout<<"YES\n"<<s<<endl;
        else if(ispalindrome(p)==0)
        cout<<"YES\n"<<p<<endl;
        else cout<<"NO\n";
    }

}
