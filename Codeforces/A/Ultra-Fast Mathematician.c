#include<stdio.h>
#include<string.h>
int main()
{
    char m[101], n[101];
    scanf("%s %s",&m,&n);
    for(int i=0; i<strlen(m); i++)
    {
        if(m[i]==n[i]) printf("0");
        else printf("1");
    }
}
