#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    int i,j,n;
    for(i=0;i<t;i++)
    {
        scanf("%d",&n);
        for(j=1;j<=n;j++)
        {
            if(j%2==0&&n%2==0) printf("%d ",j-1);
            else if(j%2!=0&&n%2==0) printf("%d ",j+1);
            else if(j==1&&n%2!=0) printf("3 ");
            else if(j>1&&n%2!=0)
            {
                if(j<=3) printf("%d ",j-1);
                //else if(j%2!=0&&j<=3) printf("%d ",j+1);
                else if(j%2==0&&j>3) printf("%d ",j+1);
                else if(j%2!=0&&j>3) printf("%d ",j-1);
            }
        }
        printf("\n");
    }
    return 0;
}

