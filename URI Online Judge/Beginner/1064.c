#include <stdio.h>

int main()
{
    float a,b,c,d,e,f,u,v,w,x,y,z;
    int i1,i2,i3,i4,i5,i6;
    scanf("%f%f%f%f%f%f",&a,&b,&c,&d,&e,&f);
    if(a>0)
    {
    i1=1;
    u=a;
    }
    else
    {
    i1=0;
    u=0;
    }
    if(b>0)
    {
    i2=1;
    v=b;
    }
    else
    {
    i2=0;
    v=0;
    }
    if(c>0)
    {
    i3=1;
    w=c;
    }
    else
    {
    i3=0;
    w=0;
    }
    if(d>0)
    {
    i4=1;
    x=d;
    }
    else
    {
        i4=0;
        x=0;
    }
    if(e>0)
    {
    i5=1;
    y=e;
    }
    else
    {
       i5=0;
       y=0;
    }
    if(f>0)
    {
    i6=1;
    z=f;
    }
    else
    {
        i6=0;
        z=0;
    }
    printf("%d valores positivos\n%.1f\n",i1+i2+i3+i4+i5+i6,(u+v+w+x+y+z)/(i1+i2+i3+i4+i5+i6));
    return 0;
}
