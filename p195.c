//195
#include<stdio.h>
int main(){

typedef struct ComNum{

int a,b;

}COM;

COM c1,c2,p;


scanf("%d %d",&c1.a,&c1.b);

scanf("%d %d",&c2.a,&c2.b);

p.a=(c1.a*c2.a-c1.b*c2.b);
p.b=(c1.a*c2.b+c1.b*c2.a);

printf("%d+i%d",p.a,p.b);

}