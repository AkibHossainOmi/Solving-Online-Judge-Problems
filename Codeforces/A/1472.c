#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    int i,a,b,c,s=1,j;
    for(i=0;i<t;i++)
    {
        s=1;
        scanf("%d%d%d",&a,&b,&c);
        for(j=0;j>=0;j++)
        {
            if(a%2==0)
            {
                a=a/2;
                s*=2;
            }
            if(b%2==0)
            {
                b=b/2;
                s*=2;
            }
            if(b%2!=0&&a%2!=0)
            {
                break;
            }
        }
        if(s==c||s>c)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }

    return 0;
}
