#include <stdio.h>

int main() {
int a,i,j,s;
scanf("%d",&a);
float n[a][3];
for(i=0;i<a;i++)
{
    for(j=0;j<3;j++)
    {
        scanf("%f",&n[i][j]);
    }
}
for(i=0;i<a;i++)
{
    printf("%.1f\n",(2*n[i][0]+3*n[i][1]+5*n[i][2])/10);
}

    return 0;
}
