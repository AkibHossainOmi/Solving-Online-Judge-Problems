#include<stdio.h>
#include<string.h>
int main()
{
    char l[1001];
    scanf("%[^\n]%*c",&l);
    int x=0, y=0;
    for(int i=0; i<strlen(l); i++)
    {
        if(l[i]!=','&&l[i]!=' '&&l[i]!='{'&&l[i]!='}')
        {
            x++;
            //printf("%c",l[i]);
            for(int j=i-1; j>=0; j--)
            {
                if(l[i]==l[j])
                {
                    y++;
                    break;
                }
            }
        }
    }
    printf("%d\n",x-y);
}
