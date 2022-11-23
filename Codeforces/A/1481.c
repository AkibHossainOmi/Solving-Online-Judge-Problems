#include<stdio.h>
#include<string.h>
int main()
{
    int t,r;
    scanf("%d",&t);
    int i,j,x,y,a=0,b=0,p=1,q=1;
    char s[100000];
    for(i=0;i<t;i++)
    {
        p=1;
        q=1;
        a=0;
        b=0;
        scanf("%d%d",&x,&y);
        scanf("%s",&s);
        r=strlen(s);
        for(j=0;j<r;j++)
        {
            if(s[j]=='U') b++;
            if(s[j]=='D') b--;
            if(s[j]=='R') a++;
            if(s[j]=='L') a--;
            //printf("%d %d\n",a,b);
            if(a==x)
            {
                p=0;
                //printf("%d\n",p);
            }
            if(y==b)
            {
                q=0;
                //printf("%d\n",q);
            }
            if(p==0&&q==0) break;
        }
        a=0;
        b=0;
        for(j=0;j<r;j++)
        {
            if(s[j]=='U') b++;

            if(s[j]=='R') a++;
            //printf("%d %d\n",a,b);
            if(a==x)
            {
                p=0;
                //printf("%d\n",p);
            }
            if(y==b)
            {
                q=0;
                //printf("%d\n",q);
            }
            if(p==0&&q==0) break;
        }
        a=0;
        b=0;
        for(j=0;j<r;j++)
        {
            if(s[j]=='D') b--;
            if(s[j]=='L') a--;
            //printf("%d %d\n",a,b);
            if(a==x)
            {
                p=0;
                //printf("%d\n",p);
            }
            if(y==b)
            {
                q=0;
                //printf("%d\n",q);
            }
            if(p==0&&q==0) break;
        }
        a=0;
        b=0;
        for(j=0;j<r;j++)
        {
            if(s[j]=='D') b--;
            if(s[j]=='L') a--;
            //printf("%d %d\n",a,b);
            if(a==x)
            {
                p=0;
                //printf("%d\n",p);
            }
            if(y==b)
            {
                q=0;
                //printf("%d\n",q);
            }
            if(p==0&&q==0) break;
        }
        for(j=0;j<r;j++)
        {
            if(s[j]=='U') b++;

            if(s[j]=='R') a++;
            //printf("%d %d\n",a,b);
            if(a==x)
            {
                p=0;
                //printf("%d\n",p);
            }
            if(y==b)
            {
                q=0;
                //printf("%d\n",q);
            }
            if(p==0&&q==0) break;
        }
        a=0;
        b=0;
        for(j=0;j<r;j++)
        {
            if(s[j]=='U') b++;

            if(s[j]=='R') a++;
            //printf("%d %d\n",a,b);
            if(a==x)
            {
                p=0;
                //printf("%d\n",p);
            }
            if(y==b)
            {
                q=0;
                //printf("%d\n",q);
            }
            if(p==0&&q==0) break;
        }
        for(j=0;j<r;j++)
        {
            if(s[j]=='D') b--;
            if(s[j]=='L') a--;
            //printf("%d %d\n",a,b);
            if(a==x)
            {
                p=0;
                //printf("%d\n",p);
            }
            if(y==b)
            {
                q=0;
                //printf("%d\n",q);
            }
            if(p==0&&q==0) break;
        }
        if(p==0&&q==0) printf("YES\n");
        else printf("NO\n");
    }
}
