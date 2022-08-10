//194

#include<stdio.h>
int main(){

typedef struct ComNum{

int a,b;

}COMPLEX;

COMPLEX c1,c2,dif;

scanf("%d %d",&c1.a,&c1.b);

scanf("%d %d",&c2.a,&c2.b);

dif.a=c1.a-c2.a;
dif.b=c1.b-c2.b;

printf("Dif=%d+i%d",dif.a,dif.b);

}
