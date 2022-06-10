#include<stdio.h>
#include<string.h>
int main()
{
    int t, n, x;
    scanf("%d",&t);
    while(t--)
    {
       char s[35], p[35], v[35]="0";
       int q[300]={0}, r[300]={0}, y=0;
       scanf("%s %s",&s,&p);
       for(int i=0;i<strlen(s);i++)
       {
        q[s[i]]++;
        if(i<strlen(p)) r[p[i]]++;
       }
       for(int j=0;j<strlen(s);j++)
       {
         if(q[s[j]]>r[s[j]])
         {
            q[s[j]]--;
            s[j]='0';
         }
       }
       for(int j=0;j<strlen(s);j++)
       {
         if(s[j]!='0')
         {
            v[y]=s[j];
            y++;
         }
       }
       if(strcmp(v,p)==0) printf("YES\n");
       else printf("NO\n");
    }
    return 0;
}