#include <stdio.h>

int main() {
 int i,g,f;
 scanf("%d%d",&g,&f);
 if(g>f)
 {
    for(i=f+1;i<g;i++)
    {
        if(i%5==2||i%5==3)
        printf("%d\n",i);
    }
 }
 else if(g<f)
 {
    for(i=g+1;i<f;i++)
    {
        if(i%5==2||i%5==3)
        printf("%d\n",i);
    }
 }
    return 0;
}
