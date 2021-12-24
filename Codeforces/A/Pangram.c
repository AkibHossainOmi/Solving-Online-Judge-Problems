#include<stdio.h>
#include<string.h>
int main()
{
    int n, i, j, r=0;
    scanf("%d",&n);
    char w[n];
    scanf("%s",&w);
    for(i='A'; i<='Z'; i++)
    {
        for(j=0; j<strlen(w); j++)
        {
            if(w[j]==i||w[j]==i+'a'-'A')
            {
                r++;
                break;
            }
        }
    }
    if(r==26) printf("YES\n");
    else printf("NO\n");
}
