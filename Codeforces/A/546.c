#include<stdio.h>
int main()
{
    int c, n, w,r=0;
    scanf("%d%d%d",&c,&n,&w);
    int i;
    for(i=1;i<=w;i++)
    {
        r=r+c*i;
    }
    if(r-n<=0) printf("0\n");
    else printf("%d\n",r-n);
}
