#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int p, q, w=0;
    for(int i=0; i<n; i++)
    {
        scanf("%d %d",&p, &q);
        if(q-p>=2) w++;
    }
    printf("%d\n",w);
}
