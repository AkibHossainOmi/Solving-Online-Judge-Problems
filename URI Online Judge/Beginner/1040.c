#include <stdio.h>

int main() {

float a,b,c,d,e;
scanf("%f%f%f%f",&a,&b,&c,&d);
if((2*a+3*b+4*c+d)/10>=7.0)
printf("Media: %.1f\nAluno aprovado.\n",(2*a+3*b+4*c+d)/10);
else if((2*a+3*b+4*c+d)/10<5.0)
printf("Media: %.1f\nAluno reprovado.\n",(2*a+3*b+4*c+d)/10);
else
{
    printf("Media: %.1f\nAluno em exame.\n",(2*a+3*b+4*c+d)/10);
    scanf("%f",&e);
    printf("Nota do exame: %.1f\n",e);
    if(((2*a+3*b+4*c+d)/10+e)/2>=5.0)
    printf("Aluno aprovado.\n");
    else
    {
    printf("Aluno reprovado.\n");
    }
    printf("Media final: %.1f\n",((2*a+3*b+4*c+d)/10+e)/2);
}
    return 0;
}
