#include<stdio.h>
int main()
{
    int a[3];
    scanf("%d %d %d",&a[0],&a[1],&a[2]);
    if(a[0]==a[1]) printf("%d\n",a[2]);
    else if(a[0]==a[2]) printf("%d\n",a[1]);
    else if(a[1]==a[2]) printf("%d\n",a[0]);
    else printf("0\n");
    return 0;
}
