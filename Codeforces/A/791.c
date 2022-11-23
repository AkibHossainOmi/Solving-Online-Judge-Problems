#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    for(int i=1;i>=0;i++)
    {
        a=a*3;
        b=b*2;
        if(a>b)
        {
            printf("%d\n",i);
            break;
        }
    }
}
