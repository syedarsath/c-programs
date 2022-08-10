//192

#include<stdio.h>
int main(){

typedef struct ComplexNum{
int a,b;
}COMPLEX;

COMPLEX c;

scanf("%d %d",&c.a,&c.b);

printf("\na+ib=%d+i%d\n",c.a,c.b);

}