#include<stdio.h>
int main()
{
    int i,t,k;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&k);
        for(int j=1;j>0;j++)
        {
            if(j%3!=0&&j%10!=3)
            {
                k--;
            }
            if(k==0)
            {
                printf("%d\n",j);
                break;
            }

        }
    }
}
