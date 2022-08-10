//193

#include<stdio.h>
int main(){

typedef struct ComNum{

int a,b;

}COMPLEX;

COMPLEX c1,c2,s;
printf("c1:\n");
scanf("%d %d",&c1.a,&c1.b);
printf("\nc2:\n");
scanf("%d %d",&c2.a,&c2.b);

s.a=c1.a+c2.a;
s.b=c1.b+c2.b;

printf("c1+c2=%d+i%d",s.a,s.b);
}
