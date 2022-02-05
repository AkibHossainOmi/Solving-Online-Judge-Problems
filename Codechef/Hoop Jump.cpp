#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    int n[t], i;
    for(i=0;i<t;i++)
    {
        scanf("%d",&n[i]);
        printf("%d\n",n[i]/2+1);
    }
}
