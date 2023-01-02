#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,t;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        char s[2000];
        scanf(" %[^\n]%*c",s);
        int x=strlen(s);
        for(int j=0;j<x;j++)
        {
            if(x%2==0)
            {
                if(j<x/2&&(s[j]>='A'||s[j]<='Z'&&s[j]>='a'&&s[j]<='z')) s[j]+=3;
                if(j<x/2) s[j]-=1;
                if(j>=x/2&&(s[j]>='A'&&s[j]<='Z'||s[j]>='a'&&s[j]<='z')) s[j]+=3;
            }
            else
            {
                if(j<=x/2&&(s[j]>='A'||s[j]<='Z'&&s[j]>='a'&&s[j]<='z')) s[j]+=3;
                if(j<=x/2) s[j]-=1;
                if(j>x/2&&(s[j]>='A'&&s[j]<='Z'||s[j]>='a'&&s[j]<='z')) s[j]+=3;
            }
        }
        for(int j=x-1;j>=0;j--)
        {
            printf("%c",s[j]);
        }
        printf("\n");
    }
}
