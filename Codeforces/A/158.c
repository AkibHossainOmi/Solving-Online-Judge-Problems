#include<stdio.h>
int main()
{
    int a,n;
    scanf("%d%d",&a,&n);
    int x[a],i,r=0;
    for(i=0;i<a;i++)
    {
        scanf("%d",&x[i]);
    }
    for(i=0;i<a;i++)
    {
        if(x[i]>0)
        {
            if(x[i]==x[n-1]||x[i]>x[n-1])
            {
                r++;
            }
        }
    }

   printf("%d",r);

    return 0;
}
