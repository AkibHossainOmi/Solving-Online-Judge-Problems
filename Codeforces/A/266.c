#include<stdio.h>
#include<string.h>
int main()
{
    int v,r=0,n;
    scanf("%d",&n);
    char a[n];
    scanf("%s",&a);
    for(v=0;v<n-1;v++)
    {
        if(a[v]==a[v+1]) r++;
    }
    printf("%d\n",r);
    return 0;
}
