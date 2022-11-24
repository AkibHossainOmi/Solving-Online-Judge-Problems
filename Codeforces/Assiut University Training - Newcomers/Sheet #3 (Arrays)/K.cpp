#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d",&n);
    char a[n];
    scanf(" %[^\n]",&a);
    //printf("%s",a);
    int i,r=0;
    for(i=0;i<n;i++)
    {
        //if(a[i]!='0')
        //{
        a[i]=a[i]-48;
        r=r+a[i];
        //}
    }
    printf("%d",r);

    return 0;
}
