#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    char f[n][3];
    int x=1;
    for(int i=0; i<n; i++)
    {
        scanf("%s",&f[i]);
        if(f[i][0]==f[i-1][1]&&i!=0) x++;
    }
    printf("%d\n",x);
}
