#include<bits/stdc++.h>
using namespace std;
int main()
{
    char l[27],a=0,b=0,c=0;
    int i,t,j,p,s,q;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%s",&l);
        p=0;
        s=0;
        q=0;
        b=0;
        c=0;
        for(j=0;j<strlen(l);j++)
        {
            if(l[j]=='a'&&strlen(l)==1)
            {
                printf("YES\n");
                b++;
            }
            else if(l[j]!='a'&&strlen(l)==1)
            {
                printf("NO\n");
                q++;
            }
            if(l[j]=='a')
            {
                p=j;
                break;
            }
            else c++;
        }
        s=p;
        a='a';
        if(c==strlen(l)&&strlen(l)!=1)
        {
            printf("NO\n");
            continue;
        }
        if(b==1||q==1) continue;
        for(j=0;j<strlen(l)-1;j++)
        {
            a++;
            //printf("%c",a);
            if(p>0&&a==l[p-1])
            {
                p--;
            }
            else if(a==l[s+1])
            {
                s++;
            }
            else
            {
                q++;
                break;
            }
        }
        if(q==0) printf("YES\n");
        else printf("NO\n");
    }
}
