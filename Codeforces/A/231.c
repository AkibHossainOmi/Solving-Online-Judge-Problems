#include<stdio.h>
int main()
{
    int a,b,c,n,i,m=0,o=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        m=0;
        scanf("%d%d%d",&a,&b,&c);
        if(a==1) m++;
        if(b==1) m++;
        if(c==1) m++;
        if(m>=2) o++;
    }
    printf("%d\n",o);
    return 0;
}
