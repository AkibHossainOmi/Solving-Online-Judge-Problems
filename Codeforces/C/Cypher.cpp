#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int b[n], a[n];
        for(int i=0; i<n; i++)
            scanf("%d",&a[i]);
        for(int i=0; i<n; i++)
        {
            scanf("%d",&b[i]);
            char s[b[i]+2];
            scanf("%s",&s);
            for(int j=0; j<b[i]; j++)
            {
            //printf("%c... \n",s[j]);
                if(s[j]=='D') a[i]++;
                else a[i]--;
                if(a[i]==-1) a[i]=9;
                if(a[i]==10) a[i]=0;
                //printf("%c... \n",s[j]);
            }
            //printf("\n%d..\n",a[i]);
        }
        for(int i=0; i<n; i++)
            printf("%d ",a[i]);
        printf("\n");
    }
    return 0;
}
