#include<stdio.h>
int main()
{
    int s[4], r=0;
    for(int i=0; i<4; i++)
    {
        scanf("%d",&s[i]);
        for(int j=i-1; j>=0; j--)
        {
            if(s[i]==s[j])
            {
                r++;
                break;
            }
        }
    }
    printf("%d\n",r);
}
