#include<stdio.h>
int main()
{
    int n,h;
    scanf("%d %d",&n,&h);
    int f[n], w=0;
    for(int i=0; i<n; i++)
    {
        scanf("%d",&f[i]);
        if(f[i]>h) w+=2;
        else w++;
    }
    printf("%d\n",w);
}
