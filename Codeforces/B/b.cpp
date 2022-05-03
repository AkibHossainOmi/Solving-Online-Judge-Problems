#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);

    while(t--)
    {
        char s[3], i, j;
        int n=0,m=25, x;
        scanf("%s",&s);
        for(i='a';i<='z';i++)
        {
            for(j='a';j<='z';j++)
            {
                if(i==j) continue;
                n++;
                if(i==s[0]&&j==s[1])
                {
                    break;
                }
            }
            if(i==s[0]&&j==s[1])
            {
                break;
            }
        }
        printf("%d\n",n);
    }
    return 0;
}
