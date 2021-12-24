#include <stdio.h>

int main()
{
    int i,j,a,s=0;
    for(i=1; i>=1; i++)
    {
        scanf("%d",&a);
        if(a==0) break;
        if(a%2!=0) a=a+1;
        for(j=0; j<5; j++)
        {
            s=s+a;
            a+=2;
        }
        printf("%d\n",s);
        s=0;
    }
    return 0;
}
