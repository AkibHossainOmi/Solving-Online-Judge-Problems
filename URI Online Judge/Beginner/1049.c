#include <stdio.h>
#include <string.h>
int main() {
 char n[20],s[20],c[20],x,y,z;
 scanf("%s%s%s",&n,&s,&c);
 x=strcmp(n,"vertebrado");
 y=strcmp(s,"ave");
 z=strcmp(c,"carnivoro");
 if(x==0&&y==0&&z==0) printf("%s\n","aguia");
 x=strcmp(n,"vertebrado");
 y=strcmp(s,"ave");
 z=strcmp(c,"onivoro");
 if(x==0&&y==0&&z==0) printf("%s\n","pomba");
 x=strcmp(n,"vertebrado");
 y=strcmp(s,"mamifero");
 z=strcmp(c,"onivoro");
 if(x==0&&y==0&&z==0) printf("%s\n","homem");
 x=strcmp(n,"vertebrado");
 y=strcmp(s,"mamifero");
 z=strcmp(c,"herbivoro");
 if(x==0&&y==0&&z==0) printf("%s\n","vaca");
 x=strcmp(n,"invertebrado");
 y=strcmp(s,"inseto");
 z=strcmp(c,"hematofago");
 if(x==0&&y==0&&z==0) printf("%s\n","pulga");
 x=strcmp(n,"invertebrado");
 y=strcmp(s,"inseto");
 z=strcmp(c,"herbivoro");
 if(x==0&&y==0&&z==0) printf("%s\n","lagarta");
 x=strcmp(n,"invertebrado");
 y=strcmp(s,"anelideo");
 z=strcmp(c,"hematofago");
 if(x==0&&y==0&&z==0) printf("%s\n","sanguessuga");
 x=strcmp(n,"invertebrado");
 y=strcmp(s,"anelideo");
 z=strcmp(c,"onivoro");
 if(x==0&&y==0&&z==0) printf("%s\n","minhoca");
    return 0;
}
