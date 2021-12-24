#include<stdio.h>
int main()
{
    int n,i,j=0,k;
    scanf("%d",&n);
    char a[4];
    for(i=0;i<n;i++)
    {
        int r=0;
        scanf("%s",&a);
        //printf("%s\n",a);
        //printf("%s",a);
        if(a[0]=='+'||a[1]=='+'||a[2]=='+')
        {
            j++;
        }
        if(a[0]=='-'||a[1]=='-'||a[2]=='-')
        {
            j--;
        }
    }
    printf("%d",j);
}
