#include<stdio.h>
int dis_int(int n);
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=n+1;i>=0;i++)
    {
        if(dis_int(i)==0)
        {
            printf("%d\n",i);
            break;
        }
    }
    return 0;
}

int dis_int(int n)
{
    int x=n, r=0, a[4];
    for(int j=0; j<4; j++)
    {
        a[j]=x%10;
        x=x/10;
    }
    for(int j=0; j<4; j++)
    {
        for(int k=j; k<4; k++)
        {
            if(a[j]==a[k]&&j!=k)
            {
                r++;
                break;
            }
        }
        if(r!=0) break;
    }
    if(r==0) return 0;
    else return 1;
}
