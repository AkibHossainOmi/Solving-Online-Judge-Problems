#include<stdio.h>
int main()
{
    int n, x, i, r=0;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&x);
        if(x==1)
        {
            r++;
        }
    }
    if(r==0) printf("EASY\n");
    else printf("HARD\n");
}
