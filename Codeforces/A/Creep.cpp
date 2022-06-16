#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
int main()
{
    int t, a, b;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&a,&b);
        if(abs(a-b)>a)
        {
            for(int i=0;i<a;i++)
            printf("0");
            for(int i=0;i<b;i++)
            printf("1");
        }
        else
        {
            int x=abs(a-b), y=0, z=0, p=0;
            for(int i=0;i<b+a;i++)
            {

                if(i<x) 
                {
                    y++;
                    printf("0");
                }
                else
                {
                    if((z==0&&p<b)||y==a)
                    {
                        printf("1");
                        p++;
                        z=1;
                    }
                    else if(z==1&&y<a)
                    {
                        printf("0");
                        y++;
                        z=0;
                    }
                }
            }
        }
        printf("\n");
    }
}