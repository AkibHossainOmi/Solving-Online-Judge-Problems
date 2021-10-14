#include <stdio.h>
int main()
{
int a,b,c,d,e,f,g,h,i,j,k,l;
char ch,s[10];
scanf("%s%d%d%c%c%c%d%c%c%c%d%s%d%d%c%c%c%d%c%c%c%d",&s,&a,&b,&ch,&ch,&ch,&c,&ch,&ch,&ch,&d,&s,&e,&f,&ch,&ch,&ch,&g,&ch,&ch,&ch,&h);
if(a<=e&&b<=f&&c<=g&&d<=h)
{
    i=e-a;
    j=f-b;
    k=g-c;
    l=h-d;
}
else if(a<=e&&b<=f&&c<g&&d>h)
{
    i=e-a;
    j=f-b;
    k=g-c-1;
    l=60+h-d;
}
else if(a<=e&&b<f&&c>g&&d<=h)
{
    i=e-a;
    j=f-b-1;
    k=60+g-c;
    l=h-d;
}
else if(a<=e&&b<f&&c>=g&&d>h)
{
    i=e-a;
    j=f-b-1;
    k=60+g-c-1;
    l=60+h-d;
}
else if(a<e&&b>f&&c<=g&&d<=h)
{
    i=e-a-1;
    j=24+f-b;
    k=g-c;
    l=h-d;
}
else if(a<e&&b>f&&c<g&&d>h)
{
    i=e-a-1;
    j=24+f-b;
    k=g-c-1;
    l=60+h-d;
}
else if(a<e&&b>=f&&c>g&&d<=h)
{
    i=e-a-1;
    j=24+f-b;
    k=60+g-c;
    l=h-d;
}
else if(a<e&&b>=f&&c>=g&&d>h)
{
    i=e-a-1;
    j=24+f-b-1;
    k=60+g-c-1;
    l=60+h-d;
}
printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n",i,j,k,l);

return 0;
}
