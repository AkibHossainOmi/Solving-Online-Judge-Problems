#include<stdio.h>
int main()
{
    int n,i,r=0,j,x,y,z;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        x=0, y=0, z=0;
        for(j=i-1;j>=0&&i>0;j--)
        {
            if(a[i]>a[j]) x++;
            else if(a[i]<a[j]) y++;
            else z++;
        }
        if((x==0&&y!=0)&&z==0) r++;
        else if((x!=0&&y==0)&&z==0) r++;
    }
    printf("%d\n",r);
}
