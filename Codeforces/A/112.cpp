#include<stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
    char a[101],b[101];
    int i,count=0,r;
    gets(a);
    gets(b);
    strlen(a);


    for ( i = 0; i < strlen(a); i++)
    {
        a[i]= tolower(a[i]);
        b[i]= tolower(b[i]);
    }
    if(strcmp(a,b)==0) r=0;
    else if(strcmp(a,b)<0) r=-1;
    else r=1;
printf("%d\n",r);
}
