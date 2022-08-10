//p187

#include<stdio.h>
int main(){
 struct big{
 int a,b,c,big;
 }big1;
 
 scanf("%d %d %d",&big1.a,&big1.b,&big1.c);
 big1.big=(big1.a>big1.b)?(big1.a>big1.c)? big1.a:big1.c:(big1.b>big1.c)?big1.b:big1.c;
 printf("%d",big1.big);
 }