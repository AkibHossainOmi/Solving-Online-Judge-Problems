#include <stdio.h>

int main() {
 float s,t,e;
 scanf("%f",&s);
 if(s<=2000) printf("Isento\n");
 else if(s>2000)
 {
    if(s-2000<=1000) t=(s-2000)*8/100.00;
    else if(s-2000>1000&&s-2000<=1500) t=8*1000/100.00+(s-3000)*18/100.00;
    else if(s-2000>1500) t=8*1000/100.00+1500*18/100.00+(s-4500)*28/100.00;
    printf("R$ %.2f\n",t);
 }
    return 0;
}
