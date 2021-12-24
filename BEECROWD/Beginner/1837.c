#include<stdio.h>
int main()
{
    int a,b,i;
    scanf("%d%d",&a,&b);
    if(a<b)
    {
        for(i=0;i>=0;i++)
        {
            if((a-i)%b==0)
            {
                break;
            }
        }
        printf("%d %d\n",(a-i)/b,i);
    }
    else if(a<0&&b<0) printf("%d %d\n",1,a-b);
    else
    printf("%d %d\n",a/b,a%b);
    return 0;
}
