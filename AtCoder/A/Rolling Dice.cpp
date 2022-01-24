#include <stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    if(b<=a*6&&a<=b) printf("Yes\n");
    else printf("No\n");
    return 0;
}
