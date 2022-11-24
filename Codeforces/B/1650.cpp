#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,t,z,max,result,x;
    max = 0;
    scanf("%d",&t);

    for(int i=0;i<t;i++)
    {
        scanf("%d %d %d",&a,&b,&c);
        z=b/c + b%c;
        result=b/c;
        x=result*c-1;
        max=x/c+x%c;
        //printf("%d...%d\n",max,x);
        if(max>z&&x>=a&&x<=b) 
        {
            z=max;
            //printf("%d...\n",z);
        }
        max = 0;
        printf("%d\n",z);
    }

    return 0;
}
