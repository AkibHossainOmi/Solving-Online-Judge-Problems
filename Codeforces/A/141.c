#include<stdio.h>
#include<string.h>
int main()
{
    char a[101], b[101], c[101];
    scanf("%s %s %s",&a,&b,&c);
    int i, j, r, q=0, n, s;
    if(strlen(a)+strlen(b)!=strlen(c))
    printf("NO\n");
    if(strlen(b)>=strlen(a)) n=strlen(b);
    else n=strlen(a);
    for(i=0; i<n; i++)
    {
        if(strlen(a)+strlen(b)!=strlen(c))
        break;
        r=0;
        s=0;
        for(j=0; j<strlen(c); j++)
        {
        if(i>=strlen(a)) break;
            if(a[i]==c[j])
            {
                c[j]='1';
                break;
            }
            else r++;
        }

        for(j=0; j<strlen(c); j++)
        {
        if(i>=strlen(b)) break;
            if(b[i]==c[j])
            {
                c[j]='1';
                break;
            }
            else s++;
        }
        if(r==strlen(c)||s==strlen(c))
        {
            printf("NO\n");
            break;
        }
        else q++;


    }
   // printf("%s\n",c);
    if(q==n) printf("YES\n");
    return 0;
}
