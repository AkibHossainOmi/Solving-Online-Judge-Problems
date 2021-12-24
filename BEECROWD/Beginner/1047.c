#include <stdio.h>

int main()
{
 int a,b,c,d;
 scanf("%d%d%d%d",&a,&b,&c,&d);
 if(c>a)
 {
 if(b>d)
 printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",c-a-1,60-b+d);
 else if(b<=d)
 printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",c-a,d-b);
 }
else if(c==a)
{
 if(b>d)
 printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",24-a+c-1,60-b+d);
 else if(b==d)
 printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",24-a+c,d-b);
 else if(b<d)
 printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",c-a,d-b);
}
else if(a>c)
{
 if(b>d)
 printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",24-a+c-1,60-b+d);
 else if(b<=d)
 printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",24-a+c,d-b);
}
return 0;
}
