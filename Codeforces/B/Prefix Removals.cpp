#include <string.h>
#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--) {
        char s[200000+10];
        int check=0;
        scanf("%s",s);
        for (int i=0; i<strlen(s); i++)
        {
            for (int j=i+1; j<strlen(s); j++)
            {
                if (s[i]==s[j])
                {
                    check++;
                    break;
                }
            }
            if (check==i) break;
        }
        printf("%s\n",s+check);
    }
}
