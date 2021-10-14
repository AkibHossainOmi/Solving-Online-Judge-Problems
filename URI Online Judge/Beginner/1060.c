#include <stdio.h>

int main()
{
    float a,b,c,d,e,f;
    int i1,i2,i3,i4,i5,i6;
    scanf("%f%f%f%f%f%f",&a,&b,&c,&d,&e,&f);
    if(a>0)
    i1=1;
    else
    i1=0;
    if(b>0)
    i2=1;
    else
    i2=0;
    if(c>0)
    i3=1;
    else
    i3=0;
    if(d>0)
    i4=1;
    else
    i4=0;
    if(e>0)
    i5=1;
    else
    i5=0;
    if(f>0)
    i6=1;
    else
    i6=0;
    printf("%d valores positivos\n",i1+i2+i3+i4+i5+i6);
    return 0;
}
