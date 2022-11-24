#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long int n;
        scanf("%lld",&n);
        char s[n+100];
        scanf("%s",&s);
        long long int p=0;
        for(int i=1;i<strlen(s);i++)
        {
            if(s[i]!=s[i-1]) p+=i;
        }
        printf("%lld\n",p+n);
    }
}
