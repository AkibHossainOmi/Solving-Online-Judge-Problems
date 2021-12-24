#include <stdio.h>

int main()
{
    int i,g,f,h=0;
    scanf("%d%d",&g,&f);
    for(i=1;i<=f;i++)
    {
        h++;
        if(h==g)
        {
            printf("%d",i);
            printf("\n");
            h=0;
        }
        else if(h<g) printf("%d ",i);
    }
    return 0;
}
