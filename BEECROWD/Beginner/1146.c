#include <stdio.h>

int main()
{
    int i,g,f,h=0;
    for(i=1;i>0;i++)
    {
        scanf("%d",&g);
        if(g==0) break;
        for(f=1;f<=g;f++)
        {
            if(f==g)
            {
                printf("%d",f);
                printf("\n");
            }
            else if(f<g) printf("%d ",f);
        }
    }
    return 0;
}
