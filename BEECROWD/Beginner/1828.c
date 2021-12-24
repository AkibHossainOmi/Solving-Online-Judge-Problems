#include <stdio.h>
#include<string.h>
int main()
{
    int t,i,j,k,r;
    scanf("%d",&t);
    char s[10],q[10];
    for(i=0;i<t;i++)
    {
        scanf("%s%s",&s,&q);
        if(strcmp(s,"tesoura")==0&&strcmp(q,"papel")==0) printf("Caso #%d: Bazinga!\n",i+1);
        else if(strcmp(s,"papel")==0&&strcmp(q,"pedra")==0) printf("Caso #%d: Bazinga!\n",i+1);
        else if(strcmp(s,"pedra")==0&&strcmp(q,"lagarto")==0) printf("Caso #%d: Bazinga!\n",i+1);
        else if(strcmp(s,"lagarto")==0&&strcmp(q,"Spock")==0) printf("Caso #%d: Bazinga!\n",i+1);
        else if(strcmp(s,"Spock")==0&&strcmp(q,"tesoura")==0) printf("Caso #%d: Bazinga!\n",i+1);
        else if(strcmp(s,"tesoura")==0&&strcmp(q,"lagarto")==0) printf("Caso #%d: Bazinga!\n",i+1);
        else if(strcmp(s,"lagarto")==0&&strcmp(q,"papel")==0) printf("Caso #%d: Bazinga!\n",i+1);
        else if(strcmp(s,"papel")==0&&strcmp(q,"Spock")==0) printf("Caso #%d: Bazinga!\n",i+1);
        else if(strcmp(s,"Spock")==0&&strcmp(q,"pedra")==0) printf("Caso #%d: Bazinga!\n",i+1);
        else if(strcmp(s,"pedra")==0&&strcmp(q,"tesoura")==0) printf("Caso #%d: Bazinga!\n",i+1);
        else if(strcmp(s,q)==0) printf("Caso #%d: De novo!\n",i+1);
        else printf("Caso #%d: Raj trapaceou!\n",i+1);
    }
    return 0;
}
