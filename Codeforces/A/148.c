#include<stdio.h>
int main()
{
    int k, l, m, n, d, r=0;
    scanf("%d %d %d %d %d",&k, &l, &m, &n, &d);
    for(int i=1; i<=d; i++)
    {
        if(i%k!=0&&i%l!=0&&i%m!=0&&i%n!=0)
        {
            r++;
        }
    }
    printf("%d\n",d-r);
}