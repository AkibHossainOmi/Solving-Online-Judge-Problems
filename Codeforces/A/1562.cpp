#include<stdio.h>
int main()
{
    int t,r,l,i,s,x;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d %d",&r,&l);
        x=1+l/2;
        s=l-x;
        if(x>=r) printf("%d\n",s);
        else printf("%d\n",l%r);
    }
}
