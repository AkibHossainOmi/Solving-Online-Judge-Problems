#include<stdio.h>
int main()
{
    int t, x, y;
    scanf("%d",&t);
    for(int i=0; i<t; i++)
    {
        scanf("%d %d",&x,&y);
        if(x%y!=0) printf("%d\n",(x/y+1)*y-x);
        else printf("0\n");
    }
}
