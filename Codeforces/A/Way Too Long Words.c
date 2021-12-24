#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,r;
    scanf("%d",&n);
    char a[n][100];
    for(i=0;i<n;i++)
    {
        scanf("%s",&a[i]);
        r=strlen(a[i]);
        if(r>10) printf("\n%c%d%c\n",a[i][0],r-2,a[i][r-1]);
        else printf("\n%s\n",a[i]);
    }
    return 0;
}
