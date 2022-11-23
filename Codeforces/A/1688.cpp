#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    int n,x,r,y,s;
    while(t--)
    {
        scanf("%d",&n);
        x=n, y=0, s=0;
        if(n==1)
        {
            printf("3\n");
            continue;
        }
        while(x!=0)
        {
            r=x%2, x=x/2;
            if(r==1&&y==0) y=1<<s;
            else if(r==1)
            {
                x=-1;
                break;
            }
            s++;
        }
        if(x==-1) printf("%d\n",y);
        else printf("%d\n",y+1);
    }
    return 0;
}
