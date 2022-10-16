#include<bits/stdc++.h>
#include<stdio.h>
int main()
{
    int t;

    scanf("%d",&t);
    while(t--)
    {
        char c[10][10];
        int y=0, i, j;
        for(i=1;i<=8;i++)
        {
            scanf("%s",&c[i]);
        }
        for(i=2;i<8;i++)
        {
            for(j=1;j<7;j++)
            {
                if(c[i][j]=='#'&&c[i-1][j-1]=='#'&&c[i-1][j+1]=='#'&&c[i+1][j-1]=='#'&&c[i+1][j+1]=='#')
                {
                    //x=i, y=j;
                    //if(c[i][j]=='#') 
                    //{
                    printf("%d %d\n",i,j+1);
                    y++;
                    break;
                    //}
                }
                if(y==1) break;
            }
            
            //printf("%c\n",c[4][2]);
        }
        //printf("%d %d\n",x,y);
    }
}
