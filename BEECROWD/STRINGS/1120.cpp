#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i;
    for(i=0;i>=0;i++)
    {
        char s[101]="\0", p[101]="\0", c;
        scanf("%c",&c);
        scanf("\n");
        gets(s);
        if(s[0]=='0'&& c=='0') break;
        int x=strlen(s),r=0, n=0, k=0;
        for(int j=0;j<x;j++)
        {
            if(s[j]==c||s[j]=='0')
            {
                r++;
            }
            if(s[j]!=c&&s[j]!='0')
            {
                p[k]=s[j];
                k++;
                n++;
            }
            if(n!=0&&s[j]=='0')
            {
                p[k]=s[j];
                k++;
            }

        }
        if(r==x) printf("0");
        else printf("%s",p);
        printf("\n");
    }
}


