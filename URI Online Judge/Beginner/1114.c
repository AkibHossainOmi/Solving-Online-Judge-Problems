#include <stdio.h>

int main() {
int p,i;
for(i=1;i>0;i++)
{
    scanf("%d",&p);
    if(p==2002)
    {
        printf("Acesso Permitido\n");
        break;
    }
    else
    printf("Senha Invalida\n");
}
    return 0;
}
