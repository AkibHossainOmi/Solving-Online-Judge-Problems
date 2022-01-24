#include <stdio.h>
int main()
{
    char s[10];
    scanf("%s",&s);
    for(int i=1; i<4; i++)
    {
        if(s[i]==s[i-1])
        {
            printf("Bad\n");
            return 0;
        }
    }
    printf("Good\n");
    return 0;
}
