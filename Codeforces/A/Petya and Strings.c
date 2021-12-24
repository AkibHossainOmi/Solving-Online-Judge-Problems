#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
    char a[1000], b[1000];
    scanf("%s%s",&a,&b);
    int i;
    for(i=0;i<strlen(a);i++)
    {
        if(a[i]<97)
            a[i]=a[i]+32;
        if(b[i]<97)
            b[i]=b[i]+32;
    }
    printf("%d",strcmp(a,b));
}
